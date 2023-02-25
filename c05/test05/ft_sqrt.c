/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skameyam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 02:56:33 by skameyam          #+#    #+#             */
/*   Updated: 2023/02/22 03:01:13 by skameyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long int	i;

	i = 0;
	if (nb <= 0)
		return (0);
	else if (nb == 1)
		return (1);
	else if (nb >= 2)
	i = 2;
	while (i * i <= nb)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
// #include <unistd.h>
// #include <stdio.h>
// #include <limits.h>
// int main()
// {
//     printf("%d\n", ft_sqrt(1));
//     printf("%d\n", ft_sqrt(0));
//     printf("%d\n", ft_sqrt(9));
//     printf("%d\n", ft_sqrt(7));
//     printf("%d\n", ft_sqrt(4));
// 	printf("%d\n", ft_sqrt(INT_MAX));
//     return 0;
// }
