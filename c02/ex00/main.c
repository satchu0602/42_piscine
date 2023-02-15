#include <unistd.h>
#include <stdio.h>
#include <string.h>

char *ft_strcpy(char *dest, char *src);

int	main()
{
	char dest[] = "Wo";
	char src[] = "beautiful";

	printf("dest: %s\n" ,dest);
	printf("src: %s\n" ,src);
	printf("copy: %s", ft_strcpy(dest, src));
    printf("\n");
	// printf("%s", strcpy(dest1, src1));
}
// char *ft_strcpy(char *dest, char *src)
// {
//     int i;
//     i = 0;
//     while(src[i] != '\0')
//     {
//         dest[i] = src[i];
//         i++;
//     }
//     dest[i] = '\0';
//     return (dest);

// }