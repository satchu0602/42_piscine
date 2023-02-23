/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skameyam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 02:38:23 by skameyam          #+#    #+#             */
/*   Updated: 2023/02/22 02:41:11 by skameyam         ###   ########.fr       */
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
/*int main(void) 
{
        printf("%u!:%u\n", 4, ft_iterative_factorial(4));
    return 0;
}*/
