/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skameyam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 02:52:47 by skameyam          #+#    #+#             */
/*   Updated: 2023/02/22 02:56:20 by skameyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else if (index > 1)
		return (ft_fibonacci (index - 1) + ft_fibonacci (index - 2));
	return (0);
}
// #include <unistd.h>
// #include <stdio.h>
// int main()
// {
// 	printf("%d\n", ft_fibonacci(-1));
//     printf("%d\n", ft_fibonacci(1));
//     printf("%d\n", ft_fibonacci(2));
//     printf("%d\n", ft_fibonacci(5));
//     printf("%d\n", ft_fibonacci(10));
//     return 0;
// }