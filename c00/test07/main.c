#include <unistd.h>

void	ft_putnbr(int nb);
void	ft_putchar(char c);


int main (void)
{
	ft_putnbr(4242);
	ft_putchar('\n');
	ft_putnbr(-2147483648);
	ft_putchar('\n');
	ft_putnbr(42);
	ft_putchar('\n');
	ft_putnbr(2147483647);
	ft_putchar('\n');
	ft_putnbr(5);
	ft_putchar('\n');

}