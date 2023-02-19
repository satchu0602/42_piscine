/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skameyam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 23:56:17 by skameyam          #+#    #+#             */
/*   Updated: 2023/02/18 23:59:08 by skameyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_strlcat関数は２つの文字列をsize-１分のsrcの文字数連結する関数

#include <unistd.h>
#include <stdio.h>
#include<string.h>

int	ft_strlen(char *str)
// 指定された文字列の長さを取得
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	// ↑ループでjをインクリメントし、ヌル文字に達するまでのカウントする
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
    // srcのインデックス
	unsigned int	j;
    // destのインデックス
	unsigned int	dlen;
    //  destの長さ
	unsigned int	slen;
    // srcの長さ

	i = 0;
	j = 0;
	dlen = ft_strlen(dest);
	slen = ft_strlen(src);
    // ここで、destとsrcのそれぞれの文字数を出す
    dlen = j;
    
	if (size == 0 || size <= dlen)
    // sizeが0である場合は、slenを返す
		return (slen + size);
	while (src[i] != '\0' && i < size - dlen -1)
    // srcの最後の文字以外で、かつ元の文字数から指定した文字数＋１を引いた数の分だけiをインクリメントする
	{
		dest[j] = src[i];
        // destにsrcをどんどん置き換える
		i++;
		j++;
	}
	dest[j] = '\0';
    // 最後にヌルをつける
	return (dlen + slen);
    // 文字数を返す
}


int main (void)
{
    char dest [] = "133742";
	char src[] = "getdestination";
    printf("dest;%d \n", ft_strlen(dest));
	printf("src;%d \n", ft_strlen(src));
    printf("answer;%i \n", ft_strlcat(dest, src, 7));
    printf("dest;%s \n", dest);
	printf("answer;%lu \n", strlcat(dest, src, 7));

}