#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	main()
{
	char src[] = "beautiful";
	char src1[] = "beautiful";
	char dest[] = "Wo";
	char dest1[] = "Wo";
	printf("%s", ft_strcpy(dest, src));
    printf("\n");
	printf("%s", strcpy(dest1, src1));
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