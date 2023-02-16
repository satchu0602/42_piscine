#include <unistd.h>
#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    unsigned int i;
    unsigned int j;
    
    i = 0;
    j = 0;
    while(dest[i] !='\0')
        i++;
    while(j < nb && src[j] !='\0')
    {
        dest[i + j] = src[j];
        // printf("%s", src);
        j++;
    }
    dest[i + j] = '\0';
    return(dest);
}
#include <unistd.h>
#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int main()
{
    char dest[] ="42";
    char src[] = "hello";
    printf("%s", ft_strncat(dest, src, 7));
    return (0);
}