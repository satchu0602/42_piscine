/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamori <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 20:22:12 by tamori            #+#    #+#             */
/*   Updated: 2023/02/11 20:22:14 by tamori           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char d);

void	rush02(int x, int y)
{
	int	i;

	i = 1;
	if (x <= 0 || y <= 0)
		write(1, "Invalid Value", 14);
	else
	{
		while (i < x * y + 1)
		{
			if (i == 1 || i == x)
				ft_putchar('A');
			else if (i == x * (y - 1) + 1 || i == x * y)
				ft_putchar('C');
			else if (i < x || i > x * (y - 1) || i % x == 0 || i % x == 1)
				ft_putchar('B');
			else
				ft_putchar(' ');
			if (i % x == 0)
				ft_putchar('\n');
			i++;
		}
	}
}
