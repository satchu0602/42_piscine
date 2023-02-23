/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skameyam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 02:47:11 by skameyam          #+#    #+#             */
/*   Updated: 2023/02/22 02:49:06 by skameyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>*/

int	ft_iterative_power(int nb, int power)
{
	int	ans;

	ans = 1;
	if (nb == 0)
		return (1);
	if (power < 0)
		return (0);
	else if (power > 0)
	{
		ans *= ans * nb;
		power--;
	}
	return (ans);
}
/*int main()
{
    printf("%d\n", ft_iterative_power(5, 0));
    printf("%d\n", ft_iterative_power(5, -2));
    return 0;
}
*/
