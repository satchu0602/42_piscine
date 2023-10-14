/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skameyam <skameyam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 02:47:11 by skameyam          #+#    #+#             */
/*   Updated: 2023/02/23 13:08:04 by skameyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	ans;

	ans = 1;
	if (power < 0)
		return (0);
	while (power != 0)
	{
		ans *= nb;
		power--;
	}
	return (ans);
}
// #include <unistd.h>
// #include <stdio.h>
// int main()
// {
//     printf("%d\n", ft_iterative_power(5, 0));
//     printf("%d\n", ft_iterative_power(5, -2));
//     printf("%d\n", ft_iterative_power(5, 3));
// 	printf("%d\n", ft_iterative_power(0, 3));
// 	printf("%d\n", ft_iterative_power(0, 0));
// 	printf("%d\n", ft_iterative_power(-5, 3));

//     return 0;
// }