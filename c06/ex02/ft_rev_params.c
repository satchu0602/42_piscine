/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skameyam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 17:46:01 by skameyam          #+#    #+#             */
/*   Updated: 2023/02/21 17:53:17 by skameyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	j = argc;
	while (j != 1)
	{
		j--;
		i = 0;
		while (argv[j][i] != '\0')
		{
			ft_putchar (argv[j][i]);
				i++;
		}
		ft_putchar ('\n');
	}
	return (0);
}
