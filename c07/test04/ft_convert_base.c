/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skameyam <skameyam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 15:40:54 by skameyam          #+#    #+#             */
/*   Updated: 2023/03/02 06:23:13 by skameyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putnbr_base(int nbr, char *base);


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
¥


int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

// void	ft_putchar(char c)
// {
// 	write(1, &c, 1);
// }

//  int	ft_errorshori(char *base)
// {
// 	int	i;
// 	int	j;
// 	i = 0;
// 	if (base[0] == '\0' || base[1] == '\0')
// 		return (0);
// 	while (base[i] != '\0')
// 	{
// 		if (base[i] == '+' || base[i] == '-' || base[i] <= 32 || base[i] == 127)
// 			return (0);
// 		j = i + 1;
// 		while (base[j] != '\0')
// 		{
// 			if (base[i] == base[j])
// 				return (0);
// 			j++;
// 		}
// 		i++;
// 	}
// 	return (1);
// }

void	ft_putnbr_base_sec(int nbr, char *base, char *nbrf)
{
	int			error;
	long int	nb;
	int			len;

	len = ft_strlen(base);
	error = ft_errorshori(base);
	nb = nbr;
	if (error == 1)
	{
		if (nb < 0)
		{
			ft_putchar ('-');
			nb *= -1;
		}
		if (nb < len)
			ft_putchar(base[nb]);
		if (nb >= len)
		{
			ft_putnbr_base (nb / len, base);
			ft_putnbr_base (nb % len, base);
		}
	}
}



char *ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*finalnbr;
	int		mednbr;
	int		lenght_nbrf;
	char	*d;

	if (checkerror(base_to) == 0 || checkerror(base_from) == 0)
		return (0);
	mednbr = ft_atoi_base(nbr, base_from);
	lenght_nbrf = lenght_nbr(mednbr, base_to, 0);
	d = (finalnbr = (char *)malloc(sizeof(char) * (lenght_nbrf + 1)));
	if (!d)
		return (0);
	ft_putnbr_base(mednbr, base_to, finalnbr);
	finalnbr[lenght_nbrf] = '\0';
	return (finalnbr);
}

#include <stdio.h>
int main (int ac, char **av)
{
	(void)ac;
	printf("%s", ft_convert_base(av[1], av[2], av[3]));
}