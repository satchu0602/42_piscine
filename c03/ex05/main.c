#include <unistd.h>
#include <stdio.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);
int	ft_strlen(char *str);

int main (void)
{
    char dest [] = "133742";
	char src[] = "getdestination";
    printf("dest;%d \n", ft_strlen(dest));
	printf("src;%d \n", ft_strlen(src));
    printf("answer;%i \n", ft_strlcat(dest, src, 9));
    printf("dest;%s \n", dest);
}