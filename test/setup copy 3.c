#include "rush01.h"
#include <stdio.h>
#include <stdlib.h>

int factorial(int n)
{
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

void swap(int* a, int* b) 
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void ft_permutation(int **arr, int start, int end, int j) 
{
    int i;

    if (start == end) 
    {
        i = 0;
        while (i <= end)
        {
            printf("%d", arr[j][i]);
            i++;
        }
        printf("\n");
    }
    else
    {
        i = start;
        while (i <= end)
        {
            swap(&arr[j][start], &arr[j][i]);
            ft_permutation(arr, start + 1, end, j);
            swap(&arr[j][start], &arr[j][i]);
            i++;
        }
    }
}

void ft_first_perm(int *arr, int size) 
{
    int k;

    k = 0;
    while(k < size)
    {
        arr[k] = k + 1;
        k++;
    }
}

int main() 
{
    int n = 4;
    int m = factorial(n);

    int** arr = (int**)malloc(m * sizeof(int*));
    for (int i = 0; i < m; i++) {
        arr[i] = (int*)malloc(n * sizeof(int));
    }

    for (int i = 0; i < m; i++)
    {
        ft_first_perm(arr[i], n);
    }

    for (int i = 0; i < m; i++) {
        ft_permutation(arr, 0, n - 1, i);
    }

    for (int i = 0; i < m; i++) {
        free(arr[i]);
    }
    free(arr);

    return 0;
}
