/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skameyam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 06:51:03 by skameyam          #+#    #+#             */
/*   Updated: 2023/03/01 06:51:58 by skameyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
// int main(void)
// {
//     int a = 1;
//     int b = 0;
//     printf("pre:a ;%d b; %d\n", a, b);
//     ft_swap(&a, &b);
//     printf("post:a ;%d b; %d", a, b);
//     return (0);
// }
