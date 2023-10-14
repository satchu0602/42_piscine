#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
    int tpm;

    tpm = *a;
    *a = *b;
    *b = tpm;
}

int main()
{
    int x = 2;
    int y = 10;

    printf("%d\n", x);
    ft_swap(&x, &y);
    printf("%d", x);
}