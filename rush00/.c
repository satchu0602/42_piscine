#include<unistd.h>

void	ft_putchar(char c);
void	rush(int x, int y);

int	main(void)
{
	rush(5, 5);
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rush(int x, int y)
{
	int i = 0;
	while(i < x) {
		if(i == 0 || i == x-1) {
			int j = 0;
			write(1, "o", 1);
			while(j < x-2) {
				write(1, "-", x-2);
				j++;
			}
			write(1, "o", 1);
			write(1, "\n", 1);
		}
		else {
			int j = 0;
			write(1, "|", 1);
			while(j < x-2) {
				write(1, " ", x-2);
				j++;
			}
			write(1, "|", 1);
			write(1, "\n", 1);
		}
        i++;
    }
}