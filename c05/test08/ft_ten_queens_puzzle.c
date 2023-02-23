/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skameyam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 03:12:33 by skameyam          #+#    #+#             */
/*   Updated: 2023/02/22 03:13:35 by skameyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	unsigned int	ans;

	ans = 1;
	while (0 < nb)
	{
	ans *= nb;
	nb--;
	}
	if (nb < 0)
		return (0);
	return (ans);
}
