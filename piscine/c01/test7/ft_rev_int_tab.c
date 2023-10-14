/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skameyam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 16:55:20 by skameyam          #+#    #+#             */
/*   Updated: 2023/02/14 17:00:03 by skameyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	a;
	int	swap;

	if (size == 0)
	{
		return ;
	}
	a = 0;
	while (a < size / 2)
	{
		swap = tab[a];
		tab[a] = tab[size - 1 - a];
		tab[size -1 - a] = swap;
		a++;
	}
}
