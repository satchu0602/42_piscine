#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(int argc, char *argv[])
{
    int i;
    int j;

    j = argc - 1;
    // ここでマイナス１をすれば、４つ入力された時に5番目からにならない
    while(j != 0)
    {
        i = 0;
        while (argv[j][i] != '\0')
        {
            ft_putchar(argv[j][i]);
            i++;
        }
        ft_putchar('\n');
        j--;
    }
    return (0);
}