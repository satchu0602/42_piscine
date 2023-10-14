/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skameyam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 02:49:27 by skameyam          #+#    #+#             */
/*   Updated: 2023/02/22 02:52:33 by skameyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power > 0)
		return (nb * ft_recursive_power (nb, power - 1));
	return (1);
}
// #include <unistd.h>
// #include <stdio.h>
// int main()
// {
//     printf("%d\n", ft_recursive_power(5, 0));
//     printf("%d\n", ft_recursive_power(5, -2));
//     printf("%d\n", ft_recursive_power(5, 2));
//     printf("%d\n", ft_recursive_power(0, 2));
//     printf("%d\n", ft_recursive_power(0, 0));
//     printf("%d\n", ft_recursive_power(-5, 3));

//     return 0;
// }
