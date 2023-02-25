#include <unistd.h>

int main(void) {
    int i;
    char c = '\0'; // 変数cを初期化
    for (i = 1; i <= 100; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            c = 'h'; write(1, &c, 1);
            c = 'e'; write(1, &c, 1);
            c = 'l'; write(1, &c, 1);
            c = 'l'; write(1, &c, 1);
            c = 'o'; write(1, &c, 1);
        } else if (i % 3 == 0) {
            c = 't'; write(1, &c, 1);
            c = 'e'; write(1, &c, 1);
            c = 's'; write(1, &c, 1);
            c = 't'; write(1, &c, 1);
        } else if (i % 5 == 0) {
            c = 's'; write(1, &c, 1);
            c = 't'; write(1, &c, 1);
            c = 'e'; write(1, &c, 1);
            c = 'p'; write(1, &c, 1);
        } else {
            c = i + '0'; write(1, &c, 1);
        }
        c = '\n'; write(1, &c, 1);
    }
    return 0;
}
