#include <unistd.h>

int main(void) {
    int i;
    char c;
    for (i = 1; i <= 100; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            c = 'F'; write(1, &c, 1);
            c = 'i'; write(1, &c, 1);
            c = 'z'; write(1, &c, 1);
            c = 'z'; write(1, &c, 1);
            c = 'B'; write(1, &c, 1);
            c = 'u'; write(1, &c, 1);
            c = 'z'; write(1, &c, 1);
            c = 'z'; write(1, &c, 1);
        } else if (i % 3 == 0) {
            c = 'F'; write(1, &c, 1);
            c = 'i'; write(1, &c, 1);
            c = 'z'; write(1, &c, 1);
            c = 'z'; write(1, &c, 1);
        } else if (i % 5 == 0) {
            c = 'B'; write(1, &c, 1);
            c = 'u'; write(1, &c, 1);
            c = 'z'; write(1, &c, 1);
            c = 'z'; write(1, &c, 1);
        } else {
            c = i / 10 + '0'; write(1, &c, 1);
            c = i % 10 + '0'; write(1, &c, 1);
        }
        c = '\n'; write(1, &c, 1);
    }
    return 0;
}
