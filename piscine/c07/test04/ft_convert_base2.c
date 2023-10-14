/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skameyam <skameyam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 14:52:38 by skameyam          #+#    #+#             */
/*   Updated: 2023/03/02 18:58:08 by skameyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h> 
#include <stdio.h>

int	checkerror(char *str);
int	ft_atoi_base(char *str, char *base);

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

int	len_nbr(int nbr, char *base, int len)
{
	int				base_len;
	unsigned int	nb;

	base_len = ft_strlen(base);
	if (nbr < 0)
	{
		nb = nbr * -1;
		len++;
	}
	else
		nb = nbr;
	while (nb >= (unsigned)base_len)
	{
		nb /= base_len;
		len++;
	}
	len++;
	return (len);
}

void	ft_putnbrbase_sec(int nbr, char *base, char *nbrf)
{
	int		len_base;
	long	nb;
	int		i;
	int		len_nbrf;

	len_base = ft_strlen(base);
	len_nbrf = len_nbr(nbr, base, 0);
	nb = nbr;
	i = 0;
	if (nb < 0)
	{
		nbrf[0] = '-';
		nb *= -1;
		i = 1;
	}
	len_nbrf--;
	while (nb >= len_base)
	{
		nbrf[len_nbrf] = base[nb % len_base];
		nb /= len_base;
		len_nbrf--;
	}
	nbrf[len_nbrf] = base[nb % len_base];
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*finalnbr;
	int		mednbr;
	int		len_nbrf;
	char	*d;

	if (checkerror(base_to) == 0 || checkerror(base_from) == 0)
		return (0);
	mednbr = ft_atoi_base(nbr, base_from);
	len_nbrf = len_nbr(mednbr, base_to, 0);
	finalnbr = (char *)malloc(sizeof(char) * (len_nbrf + 1));
	d = finalnbr;
	if (!d)
		return (0);
	ft_putnbrbase_sec(mednbr, base_to, finalnbr);
	finalnbr[len_nbrf] = '\0';
	return (finalnbr);
}
int	main (int ac, char **av)
{
	(void)ac;
	printf("%d 進数を\n", ft_strlen(av[2]));
	printf("%d 進数に\n", ft_strlen(av[3]));
	printf("result:%s\n", ft_convert_base(av[1], av[2], av[3]));
}
