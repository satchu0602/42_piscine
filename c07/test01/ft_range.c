/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skameyam <skameyam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 05:37:53 by skameyam          #+#    #+#             */
/*   Updated: 2023/02/27 05:47:07 by skameyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*addr;
	int	i;
	int	j;

	j = (max - min);
	addr = (int *)malloc (sizeof (int) * (j));
	if (min >= max)
		return (0);
	i = 0;
	while (i < j)
	{
		addr[i] = (min + i);
		i++;
	}
	return (addr);
}

// int main()
// {
//     int min = 4;
//     int max = 10; 
//     int i;
//     int *arr = ft_range(min, max);

//     i = 0;
//     while(i < (max - min))
//     {
//         printf("%d" , arr[i]);
//         i++;
//     }
//     free(arr);
//     return (0);
// }
