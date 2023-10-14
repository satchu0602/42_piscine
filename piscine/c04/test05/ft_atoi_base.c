/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skameyam <skameyam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 15:40:54 by skameyam          #+#    #+#             */
/*   Updated: 2023/03/02 04:19:11 by skameyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	checkerror(char *str)
{
	int	i;
	int	j;

	if (str[0] == '\0' || str[1] == '\0')
		return (0);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 32 || str[i] == 127 || str[i] == '+' || str[i] == '-')
			return (0);
		j = i + 1;
		while (str[j] != '\0')
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

int	nb_base(char str, char *base)
{
	int	nb;

	nb = 0;
	while (base[nb] != '\0')
	{
		if (str == base[nb])
			return (nb);
		nb++;
	}
	return (-1);
}

int	whitespaces(char *str, int *ptr_i)
{
	int	count;
	int	i;

	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	count = 1;
	while (str[i] && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			count *= -1;
		i++;
	}
	*ptr_i = i;
	return (count);
}

int	ft_atoi_base(char *str, char *base)
{
	int		i;
	int		negative;
	int		nb;
	int		nb2;
	int		begin_len;

	nb = 0;
	i = 0;
	begin_len = checkerror(base);
	if (begin_len >= 2)
	{
		negative = whitespaces(str, &i);
		nb2 = nb_base(str[i], base);
		while (nb2 != -1)
		{
			nb = (nb * begin_len) + nb2;
			i++;
			nb2 = nb_base(str[i], base);
		}
		return (nb *= negative);
	}
	return (0);
}

// int		main(void)
{
//     printf("%d\n", ft_atoi_base("FF", "0123456789abcdef")); // 0
//     printf("%d\n", ft_atoi_base("ff", "0123456789abcdef")); // 255
    // printf("%d\n", ft_atoi_base("1010", "01")); // 10
    // printf("%d\n", ft_atoi_base("123", "0123456789")); // 102
//     printf("%d\n", ft_atoi_base("1000000", "0123456789abcdef")); // 16777216
// 	printf("%d\n", ft_atoi_base("	+++++--133742", "0123456789"));
// 	printf("%d\n", ft_atoi_base("	     ---101010", "01"));//-42
// 	printf("%d\n", ft_atoi_base(" 	+---539", "0123456789abcdef"));//-1337
// 	printf("%d\n", ft_atoi_base(" 	+---", "0"));
	// printf("%d\n", ft_atoi_base("435", "8643251907"));
}
