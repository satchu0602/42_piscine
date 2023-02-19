#include <unistd.h>
#include <stdio.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int main (void)
{
	char src[] = "Born to code";
    char dest [] = "1337 42";
    printf("%i \n", ft_strlcat(dest, src, 15));
    printf("%s \n", dest);
}