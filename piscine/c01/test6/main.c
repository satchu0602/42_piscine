#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str);

int	main()
{
	int nbr;
	char *c = "yahoo";

	nbr = 	ft_strlen(c);
	printf("%d", nbr);

	return 0;
}	