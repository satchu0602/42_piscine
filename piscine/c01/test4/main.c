#include <unistd.h>
#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b);

int main()
{
	int x;
	int y;

	x = 15;
	y =2;

	ft_ultimate_div_mod(&x, &y);
	printf("%d | %d", x, y);
	return (0);
}