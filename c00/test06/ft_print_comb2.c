/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skameyam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 10:27:49 by skameyam          #+#    #+#             */
/*   Updated: 2023/02/13 10:53:04 by skameyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_nbr(int nbr);

void	ft_print_comb2(void)
{
	int	i;
	int	f;

	i = 0;
	while (i <= 99)
	{
		f = i + 1;
		while (f <= 99)
		{
			ft_print_nbr(i);
			write(1, " ", 1);
			ft_print_nbr(f);
			if (i != 98)
			{
				write(1, ", ", 2);
			}
			f++;
		}
		i++;
	}
}

void	ft_print_nbr(int nbr)
{
	char	a;
	char	b;

	a = nbr / 10;
	b = nbr % 10;
	a += '0';
	b += '0';
	write(1, &a, 1);
	write(1, &b, 1);
}
