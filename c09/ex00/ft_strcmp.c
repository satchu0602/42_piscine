/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skameyam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 06:49:21 by skameyam          #+#    #+#             */
/*   Updated: 2023/03/01 06:53:48 by skameyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
// int	main()
// {
// 	printf("%d", ft_strcmp("Hello", "Hello1"));
// 	printf("\n%d", ft_strcmp("Hello", "He"));
// 	printf("\n%d", ft_strcmp("He", "Hello"));
// 	printf("\n%d", ft_strcmp("Hello", "Hello"));
// 	printf("\n%d", ft_strcmp("Hello", "Hello"));
// 	printf("\n%d", ft_strcmp("", ""));
// 	printf("\n%d", ft_strcmp("", "o"));
// }
