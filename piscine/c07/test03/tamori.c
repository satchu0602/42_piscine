/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tamori.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skameyam <skameyam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 05:38:06 by skameyam          #+#    #+#             */
/*   Updated: 2023/03/02 20:26:46 by skameyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	count_full_len(int size, char **strs, char *sep)
{
	int	i;
	int	full_len;

	i = 0;
	full_len = 0;
	while (i < size)
	{
		full_len += ft_strlen(strs[i]);
		if (i++ < size - 1)
			full_len += ft_strlen(sep);
	}
	return (full_len);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strcat(char *dest, char *src)
{
	char	*temp;

	temp = dest;
	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	return (temp);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		full_len;
	char	*a;

	if (size <= 0)
	{
		a = malloc(sizeof(char));
		*a = '\0';
		return (a);
	}
	full_len = count_full_len(size, strs, sep);
	a = malloc(sizeof(char) * full_len + 1);
	if (a == NULL)
		return (NULL);
	ft_strcpy(a, strs[0]);
	i = 1;
	while (i < size)
	{
		ft_strcat(a, sep);
		ft_strcat(a, strs[i++]);
	}
	return (a);
}
// int main()
// {
// 	int size = 5;
// 	char *board[] = {"123", "456", "789", "012", "345"};
// 	char sep[] = "!sep!";

// 	char *result = ft_strjoin(size, board, sep);
// 	if (result == NULL) {
// 		printf("Error: memory allocation failed\n");
// 		return 1;
// 	}

// 	printf("%s\n", result);
// 	free(result);

// 	return 0;
// }