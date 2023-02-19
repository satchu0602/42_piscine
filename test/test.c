#include <stdlib.h>
#include <stdio.h>

#define SIZE 4

int views[4][4];
int grid[SIZE][SIZE];
int possible_heights[SIZE][SIZE][4];

void parse_views(char* args[]) {
    for (int i = 0; i < 16; i++) {
        int view = atoi(args[i]);
        int row = i / 4;
        int col = i % 4;
        if (view < 1 || view > 4) {
            printf("Error\n");
            exit(1);
        }
        views[row][col] = view;
    }
}

void initialize_grid() {
    for (int row = 0; row < SIZE; row++) {
        for (int col = 0; col < SIZE; col++) {
            grid[row][col] = 1;
        }
    }
}

void calculate_possible_heights() {
    for (int row = 0; row < SIZE; row++) {
        for (int col = 0; col < SIZE; col++) {
            for (int view = 0; view < 4; view++) {
                int possible_min_height = SIZE - views[view][col];
                int possible_max_height = views[view][col] - 1;
                if (row == 0) {
                    possible_max_height = SIZE - views[view + 4][col] - 1;
                } else if (row == SIZE - 1) {
                    possible_max_height = views[view + 8][col] - 1;
                }
                if (col == 0) {
                    possible_max_height = SIZE - views[view][row + 4] - 1;
                } else if (col == SIZE - 1) {
                    possible_max_height = views[view][SIZE - row - 1 + 12] - 1;
                }
                possible_heights[row][col][view] = possible_max_height;
                for (int height = possible_min_height; height <= possible_max_height; height++) {
                    if (height != grid[row][col]) {
                        possible_heights[row][col][view] = -1;
                        break;
                    }
                }
            }
        }
    }
}

void apply_uniqueness_constraint() {
    int changed = 1;
    while (changed) {
        changed = 0;
        for (int row = 0; row < SIZE; row++) {
            for (int col = 0; col < SIZE; col++) {
                int possible_height = 0;
                for (int view = 0; view < 4; view++) {
                    if (possible_heights[row][col][view] == grid[row][col]) {
                        possible_height++;
                    }
                }
                for (int i = 0; i < SIZE; i++) {
                    if (i != col && grid[row][i] == grid[row][col]) {
                        possible_height = 0;
                        break;
                    }
                }
                for (int i = 0; i < SIZE; i++) {
                    if (i != row && grid[i][col] == grid[row][col]) {
                        possible_height = 0;
                        break;
                    }
                }
                if (possible_height == 1) {
                    int found
