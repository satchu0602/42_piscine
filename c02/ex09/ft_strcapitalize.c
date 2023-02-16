/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skameyam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 07:13:25 by skameyam          #+#    #+#             */
/*   Updated: 2023/02/16 07:23:14 by skameyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str);
void	ft_strlowcase(char *c);
void	ft_strupcase(char *c);
int		ft_other(char *c);

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_strupcase (str + i);
		while (ft_other(str + i) == 0)
		{
			i++;
			ft_strlowcase (str + i);
		}
		i++;
	}
	return (str);
}

void	ft_strlowcase (char *c)
{
	if (*c >= 'A' && *c <= 'Z')
		*c += 32;}
}

void	ft_strupcase (char *c)
{
	if(*c >= 'a' && *c <= 'z')
		*c -= 32;
}

int	ft_other (char *c)
{
	if ((*c >= 'a') && (*c <= 'z'))
		return 0;
	else if ((*c >= 'A') && (*c <= 'Z'))
		return 0;
	else if (*c >= '0' && *c <= '9')
		return 0;
	return (1);
}
