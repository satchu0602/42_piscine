/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skameyam <skameyam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 02:41:29 by skameyam          #+#    #+#             */
/*   Updated: 2023/02/23 13:07:25 by skameyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include<stdio.h>
int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}

// int main(void) 
// {
//     printf("%d!:%u\n", -3, ft_recursive_factorial(-3));
//     printf("%u!:%u\n", 4, ft_recursive_factorial(4));
// 	printf("%u!:%u\n", 0, ft_recursive_factorial(0));
// 	printf("%c!:%u\n", 'a', ft_recursive_factorial('a'));

//     return (0);
// } 