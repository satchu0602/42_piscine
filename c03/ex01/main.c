#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int	main()
{
	printf("%d", ft_strncmp("Hello", "Hello1" ,4));
	printf("\n%d", ft_strncmp("Hello", "He", 4));
	printf("\n%d", ft_strncmp("He", "Hello", 4));
	printf("\n%d", ft_strncmp("Hello", "Hello", 4));
	printf("\n%d", ft_strncmp("Hello", "Hello1" ,10));
	printf("\n%d", ft_strncmp("Hello", "He", 10));
	printf("\n%d", ft_strncmp("He", "Hello", 10));
	printf("\n%d", ft_strncmp("Hello", "Hello", 10));
	printf("\n%d", ft_strncmp("He", "Hello", 0));
	printf("\n%d", ft_strncmp("Hello", "Hello", 0));
}