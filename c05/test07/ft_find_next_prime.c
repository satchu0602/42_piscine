/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skameyam <skameyam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 03:06:24 by skameyam          #+#    #+#             */
/*   Updated: 2023/02/23 12:44:12 by skameyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

int	ft_is_prime(int nb)
{
	long int	i;

	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	i = 3;
	while (i < nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	while (nb >= 2)
	{
		if (ft_is_prime(nb) == 1)
			return (nb);
		nb++;
	}
	return (0);
}
// int main()
// {
//     printf("%d -> %d\n", -3965, ft_find_next_prime(-3965));
// 	printf("%d -> %d\n", -12, ft_find_next_prime(-12));
// 	printf("%d -> %d\n", 0, ft_find_next_prime(0));
// 	printf("%d -> %d\n", 1, ft_find_next_prime(1));
// 	printf("素数：%d -> %d\n", 2, ft_find_next_prime(2));
// 	printf("素数：%d -> %d\n", 4219, ft_find_next_prime(4219));
// 	printf("素数：%d -> %d\n", 7853, ft_find_next_prime(7853));
// 	printf("素数：%d -> %d\n", 78989, ft_find_next_prime(78989));
// 	printf("素数：%d -> %d\n", 2147483647, ft_find_next_prime(2147483647));
// 	printf("%d -> %d\n", 200, ft_find_next_prime(200));
// 	printf("%d -> %d\n", 201, ft_find_next_prime(201));
// 	printf("%d -> %d\n", 202, ft_find_next_prime(202));
// 	printf("%d -> %d\n", 203, ft_find_next_prime(203));
// 	printf("%d -> %d\n", 204, ft_find_next_prime(204));
// 	printf("%d -> %d\n", 205, ft_find_next_prime(205));
// 	printf("%d -> %d\n", 206, ft_find_next_prime(206));
// 	printf("%d -> %d\n", 207, ft_find_next_prime(207));

//     return 0;
// }
