#include <stdio.h>

char *ft_strcat(char *dest, char *src);

int main()
{
    char src[]= "genki";
    char dest[]= "115";
    printf("%s", ft_strcat(dest, src));
}