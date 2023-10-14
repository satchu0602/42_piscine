#include "ft.h"

int main()
{
    ft_putchar('m');
    return (0);
}

void ft_putchar(char c)
{
    write(1, &c ,1);
}