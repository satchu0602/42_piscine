/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skameyam <skameyam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 06:54:01 by skameyam          #+#    #+#             */
/*   Updated: 2023/03/01 17:36:36 by skameyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_strlencheck(char c, char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

// int main()
// {
// 	char i = 'o';
// 	char str[] = "hello";
// 	printf("文字含んでる？1or0：%d\n",ft_strlencheck(i, str));
// }

int	count_strings(char *str, char *charset)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && ft_strlencheck(str[i], charset))
			i++;
		if (str[i] != '\0')
			count++;
		while (str[i] != '\0' && !ft_strlencheck(str[i], charset))
			i++;
	}
	return (count);
}

// int main()
// {
// 	char str[] = "hello,world!I'm skameyam";
// 	char charset[] = ",!";
// 	printf("分断された文字列数：%d",count_strings(str, charset));
// }

int	ft_strlen_sep(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && !ft_strlencheck(str[i], charset))
		i++;
	return (i);
}

// int main()
// {
// 	char str[] = "hello,world!I'm skameyam";
// 	char charset[] = ",!";
// 	printf("分断されるまでの文字の数：%d",ft_strlen_sep(str, charset));
// }

char	*ft_firstword(char *str, char *charset)
{
	int		len_word;
	int		i;
	char	*word;

	i = 0;
	len_word = ft_strlen_sep(str, charset);
	word = (char *)malloc(sizeof (char) * (len_word + 1));
	if (word == NULL)
		return (NULL);
	while (i < len_word)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

// int main()
// {
// 	char str[] = "hello,world!I'm skameyam";
// 	char charset[] = ",!";
// 	printf("最初の文字列のコピー：%s",ft_firstword(str, charset));
// }

char	**ft_split(char *str, char *charset)
{
	char	**strings;
	int		i;

	i = 0;
	strings = (char **)malloc(sizeof (char *)
			* (count_strings(str, charset) + 1));
	while (*str != '\0')
	{
		while (*str != '\0' && ft_strlencheck(*str, charset))
			str++;
		if (*str != '\0')
		{
			strings[i] = ft_firstword(str, charset);
			i++;
		}
		while (*str && !ft_strlencheck(*str, charset))
			str++;
	}
	strings[i] = 0;
	return (strings);
}

// #include <stdio.h>
// int	main(int argc, char **argv)
// {
// 	int		i;
// 	char	**split;
// 	(void)	argc;
// 	split = ft_split(argv[1], argv[2]);
// 	i = 0;
// 	while (split[i])
// 	{
// 		printf("%s\n", split[i]);
// 		i++;
// 	}
// }
