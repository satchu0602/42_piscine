/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skameyam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 08:24:39 by skameyam          #+#    #+#             */
/*   Updated: 2023/02/11 08:24:41 by skameyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a);

void	rush00(int x, int y)
{
	int	i;

	i = 1;
	if (x <= 0 || y <= 0)
		write(1, "Invalid Value", 14);
	else
	{
		while (i < x * y + 1)
		{	
			if (i == 1 || i == x * (y - 1) + 1 || i == x || i == x * y)
				ft_putchar('o');
			else if (i < x || i > x * (y - 1))
				ft_putchar('-');
			else if (i % x == 0 || i % x == 1)
				ft_putchar('|');
			else
				ft_putchar(' ');
			if (i % x == 0)
				ft_putchar('\n');
			i++;
		}
	}	
}
