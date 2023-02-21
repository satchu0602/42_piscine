/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skameyam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 03:01:25 by skameyam          #+#    #+#             */
/*   Updated: 2023/02/22 03:05:04 by skameyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>*/

int	ft_is_prime(int nb);

int	ft_is_prime(int nb)
{
	unsigned int	i;

	if (nb < 2)
		return (0);
	i = 2;
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
/*int main()
{
    printf("%d -> %d\n", -3965, ft_is_prime(-3965));
	printf("%d -> %d\n", -12, ft_is_prime(-12));
	printf("%d -> %d\n", 0, ft_is_prime(0));
	printf("%d -> %d\n", 1, ft_is_prime(1));
	printf("素数：%d -> %d\n", 2, ft_is_prime(2));
	printf("素数：%d -> %d\n", 4219, ft_is_prime(4219));
	printf("素数：%d -> %d\n", 7853, ft_is_prime(7853));
	printf("素数：%d -> %d\n", 78989, ft_is_prime(78989));
	printf("素数：%d -> %d\n", 2147483647, ft_is_prime(2147483647));
	printf("%d -> %d\n", 200, ft_is_prime(200));
	printf("%d -> %d\n", 201, ft_is_prime(201));
	printf("%d -> %d\n", 202, ft_is_prime(202));
	printf("%d -> %d\n", 203, ft_is_prime(203));
	printf("%d -> %d\n", 204, ft_is_prime(204));
	printf("%d -> %d\n", 205, ft_is_prime(205));
	printf("%d -> %d\n", 206, ft_is_prime(206));
	printf("%d -> %d\n", 207, ft_is_prime(207));

    return 0;
}*/
