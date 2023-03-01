/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base copy.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skameyam <skameyam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 15:40:54 by skameyam          #+#    #+#             */
/*   Updated: 2023/03/02 03:49:49 by skameyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

// baseのエラーチェックを行う関数
int	checkerror(char *str)
{
	int	i;
	int	j;

	// strの長さが1以下の場合は0を返す
	if (str[0] == '\0' || str[1] == '\0')
		return (0);

	// strに含まれる文字のエラーチェック
	i = 0;
	while (str[i] != '\0')
	{
		// ASCIIコードが32以下、127である文字、および+と-はエラーとする
		if (str[i] <= 32 || str[i] == 127 || str[i] == '+' || str[i] == '-')
			return (0);

		// strに重複する文字がある場合はエラーとする
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

// 数字strのbase進数での数を返す関数
int	nb_base(char str, char *base)
{
	int nb;

	nb = 0;
	while (base[nb] != '\0')
	{
		// strがbaseの何番目の文字かを調べる
		if (str == base[nb])
			return (nb);
		nb++;
	}
	return (-1);
}

// 数字の前にある空白を無視する関数
int	whitespaces(char *str, int *ptr_i)
{
	int	count;
	int	i;

	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;

	// 数字の前にある+と-の数を数える
	count = 1;
	while (str[i] && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			count *= -1;
		i++;
	}

	// iの値を*ptr_iにセットし、+と-の数を返す
	*ptr_i = i;
	return (count);
}

// strをbase進数の数値に変換する関数
int	ft_atoi_base(char *str, char *base)
{
	int		i;
	int		negative;
	int		nb;
	int		nb2;
	int		begin_len;

	nb = 0;
	i = 0;

	// baseのエラーチェックとベースの数
	begin_len = checkerror(base);
	if (begin_len >= 2)
	{
		// 数字の前にある+と-の数を数える
		negative = whitespaces(str, &i);

		// strをbase進数に変換する
		nb2 = nb_base(str[i], base);
		while (nb2 != -1)
		{
			nb = (nb * begin_len) + nb2;
			i++;
			nb2 = nb_base(str[i], base);
		}

		// 変換した数値に符号をつけて返す
		return (nb *= negative);
	}
	return (0);
}

int		main(void)
{
    printf("%d\n", ft_atoi_base("FF", "0123456789abcdef")); // 255
    printf("%d\n", ft_atoi_base("ff", "0123456789abcdef")); // 255
    printf("%d\n", ft_atoi_base("1010", "01")); // 10
    printf("%d\n", ft_atoi_base("123", "012345678")); // 83
    printf("%d\n", ft_atoi_base("1000000", "0123456789abcdef")); // 16777216
	printf("%d\n", ft_atoi_base("	+++++--133742", "0123456789"));
	printf("%d\n", ft_atoi_base("	     ---101010", "01"));//-42
	printf("%d\n", ft_atoi_base(" 	+---539", "0123456789abcdef"));//-1337
	printf("%d\n", ft_atoi_base(" 	+---", "0"));
}