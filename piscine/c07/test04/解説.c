/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skameyam <skameyam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 15:40:54 by skameyam          #+#    #+#             */
/*   Updated: 2023/03/02 17:56:40 by skameyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h> 
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

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0') // 文字列の末尾に到達するまでループ
	{
		i++; // 文字列の長さをカウント
	}
	return (i); // 文字列の長さを返す
}

// 変換後の文字列の長さ(len_nbrf)を計算する関数（符号、数字、終端のヌル文字を含む）
int	len_nbr(int nbr, char *base, int len)
{
	int				base_len; // 基数の文字列の長さ
	unsigned int	nb; // 正の整数に変換されたnbr

	base_len = ft_strlen(base); // 基数の文字列の長さを計算
	if (nbr < 0) // nbr が負の場合
	{
		nb = nbr * -1; // 正の整数に変換
		len++; // 符号を含むため、桁数を1増やす
	}
	else
		nb = nbr; // 正の整数に変換
	while (nb >= (unsigned)base_len) // nb が基数よりも大きい場合
	{
		printf("baselen1:%d\n",base_len);
		// printf("nb1:%d\n",nb);
		nb /= base_len; // nb を基数で割って桁数をカウント
		// printf("nb2:%d\n",nb);
		len++; // 桁数を1増やす
		// printf("len2:%d\n",len);
	}
	len++; // 終端のヌル文字を含むため、桁数を1増やす
	return (len); // 変換後の文字列の長さを返す
}

void	ft_putnbrbase_sec(int nbr, char *base, char *nbrf)
{
	int		len_base; // 基数の文字列の長さ
	long	nb; // 符号を含めた正の整数に変換されたnbr
	int		i; // 変換後の文字列の先頭の位置
	int		len_nbrf; // 変換後の文字列の長さ

	len_base = ft_strlen(base); // 基数の文字列の長さを計算
	len_nbrf = len_nbr(nbr, base, 0); // 変換後の文字列の長さを計算
	nb = nbr; // 符号を含めた正の整数に変換
	i = 0; // 変換後の文字列の先頭の位置を0に設定
	if (nb < 0) // nbr が負の場合
	{
		nbrf[0] = '-'; // 変換後の文字列の先頭に符号を書き込む
		nb *= -1; // 正の整数に変換
		i = 1; // 変換後の文字列の先頭の位置を1に設定
	}
	len_nbrf--; // 変換後の文字列の最後の位置を計算するために1減らす
	while (nb >= len_base) // nb が基数よりも大きい場合
	{
		nbrf[len_nbrf] = base[nb % len_base]; // nb を基数で割った余りを文字列に書き込む
		nb /= len_base; // nb を基数で割る
		len_nbrf--; // 次の桁を指すために1減らす
	}
	nbrf[len_nbrf] = base[nb % len_base]; // 最後の桁を文字列に書き込む
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*finalnbr;      // 変換後の文字列を格納するポインタ
	int		mednbr;         // 10進数の整数値を格納する変数
	int		len_nbrf;    // 変換後の文字列の長さを格納する変数
	char	*d;

	// 変換元の基数(base_from)や変換先の基数(base_to)が不正でないかをチェックする
	if (checkerror(base_to) == 0 || checkerror(base_from) == 0)
		return (0);

	// 引数で与えられた文字列(nbr)を変換元の基数(base_from)に基づき、10進数の整数値(mednbr)に変換する
	mednbr = ft_atoi_base(nbr, base_from);

	// 変換後の文字列の長さ(len_nbrf)を計算する
	len_nbrf = len_nbr(mednbr, base_to, 0);

	// 変換後の文字列を格納するために必要なメモリを確保する
	d = (finalnbr = (char *)malloc(sizeof(char) * (len_nbrf + 1)));
	if (!d)
		return (0);

	// 中間表現の整数値(mednbr)を変換先の基数(base_to)に基づき、変換後の文字列(finalnbr)を生成する
	ft_putnbrbase_sec(mednbr, base_to, finalnbr);

	// 変換後の文字列(finalnbr)の末尾にヌル文字('\0')を追加する
	finalnbr[len_nbrf] = '\0';

	// 変換後の文字列(finalnbr)の先頭アドレスを返す
	return (finalnbr);
}
int main (int ac, char **av)
{
	(void)ac;
	printf("%d 進数を\n", ft_strlen(av[2]));
	printf("%d 進数に\n", ft_strlen(av[3]));
	printf("result:%s\n", ft_convert_base(av[1], av[2], av[3]));
}