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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dlen;
	unsigned int	slen;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
	j++;
	dlen = j;
	slen = ft_strlen(src);
	if (size == 0 || size <= dlen)
		return (slen + size);
	while (src[i] != '\0' && i < size - dlen -1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dlen + slen);
}

int main (void)
{
    char dest [] = "133742";
	char src[] = "getdestination";
    printf("dest;%d \n", ft_strlen(dest));
	printf("src;%d \n", ft_strlen(src));
    printf("answer;%i \n", ft_strlcat(dest, src, 9));
    printf("dest;%s \n", dest);
}