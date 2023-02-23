<<<<<<< HEAD
#include <unistd.h>

int ft_isspace(char c)
{
    return (c == ' ' || c == '\t' || c == '\n' ||
            c == '\r' || c == '\v' || c == '\f');
=======
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skameyam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 14:45:31 by skameyam          #+#    #+#             */
/*   Updated: 2023/02/21 14:50:27 by skameyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isspace(char c)
{
	return (c == ' ' || c == '\t' || c == '\n'
		|| c == '\r' || c == '\v' || c == '\f');
>>>>>>> 24513508c645d5a8e080dbb1f90e97ed84a91509
}

int	sign_processing(char *str, int *ptr_i)
{
<<<<<<< HEAD
    int	count;
    int	i;

    i = 0;
    count = 1;
    while (str[i] && ft_isspace(str[i]))
        i++;
    while (str[i] && (str[i] == '+' || str[i] == '-'))
    {
        if (str[i] == '-')
            count *= -1;
        i++;
    }
    *ptr_i = i;
    return (count);
=======
	int	count;
	int	i;

	i = 0;
	count = 1;
	while (str[i] && ft_isspace(str[i]))
		i++;
	while (str[i] && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			count *= -1;
				i++;
	}
	*ptr_i = i;
	return (count);
>>>>>>> 24513508c645d5a8e080dbb1f90e97ed84a91509
}

int	ft_atoi(char *str)
{
<<<<<<< HEAD
    int	sign;
    int	result;
    int	i;

    result = 0;
    sign = sign_processing(str, &i);
    while (str[i] && str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }
    result *= sign;
    return (result);
=======
	int	sign;
	int	result;
	int	i;

	result = 0;
	sign = sign_processing(str, &i);
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	result *= sign;
	return (result);
>>>>>>> 24513508c645d5a8e080dbb1f90e97ed84a91509
}
