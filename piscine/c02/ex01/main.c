#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main()
{
	char src[] = "Hello";
	char dest[] = "World1";
	char dest1[] = "World2";

	printf("%s", ft_strncpy(dest, src, 3));
    // Helld1
	printf("\n%s", strncpy(dest1, src, 3));
    // Helld2
	printf("\n%s", ft_strncpy(dest, src, 5));
    // Hello1
	printf("\n%s", strncpy(dest1, src, 5));
    // Hello2
	printf("\n%s", ft_strncpy(dest, src, 7));
    // Hello
	printf("\n%s", strncpy(dest1, src, 7));
    // Hello
}