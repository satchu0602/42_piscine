#include <unistd.h>
#include <stdio.h>

void ft_swap(int *a, int *b)
{
    int tmp;

    tmp = *a;
    *a  = *b;
    *b  = tmp;
}
// int main(void)
// {
//     int a = 1;
//     int b = 0;
//     printf("pre:a ;%d b; %d\n", a, b);
//     ft_swap(&a, &b);
//     printf("post:a ;%d b; %d", a, b);
//     return (0);
// }