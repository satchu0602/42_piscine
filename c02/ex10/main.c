#include <stdio.h>

int ft_strlen(char *str);
unsigned int  ft_strlcpy(char *dest, char *src, unsigned int size);

int main()
{
    char src[] = "41 42 43 44 00";
    char dest[] = "AA AA AA AA AA AA";
    printf("%d | %s", ft_strlcpy(dest, src, 5), dest);
}