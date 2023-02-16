#include <unistd.h>
#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int main()
{
    char dest[] ="42";
    char src[] = "hello";
    printf("%s", ft_strncat(dest, src, 7));
}