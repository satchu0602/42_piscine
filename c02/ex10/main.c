#include <stdio.h>

int ft_strlen(char *str);
unsigned int  ft_strlcpy(char *dest, char *src, unsigned int size);

int main()
{
    char src[] = "World!";
    char dest[] = "Hello";
    printf("%d | %s", ft_strlcpy(dest, src, 10), dest);
}