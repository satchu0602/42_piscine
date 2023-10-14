#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);


int main()
{
	int a;
	int b;
	// int *div;
	// int *mod;
	int x;
	int y;

	// x = div;
	// y = mod;
	a = 19;
	b =2;

	ft_div_mod(a, b, &x, &y);
	printf("%d\n",x);
	printf("%d",y);	
	return (0);
}