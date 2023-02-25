#include <stdio.h>
#include "ft_abs.h"

int main(void) 
{
    int x;
    int y;

    x = -1234;
    ABS(x);
    printf("%d\n", x);

    y = 1234;
    ABS(y);
    printf("%d\n", y);

    return (0);
}