/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skameyam <skameyam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 14:52:38 by skameyam          #+#    #+#             */
/*   Updated: 2023/02/28 06:30:23 by skameyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
int ft_errorshori(char *base);
int	ft_strlen(char *str);
void ft_putchar(char c);

void ft_putnbr_base(int nbr, char *base)
{
    int error;
    int nb;
    int len;

    len = ft_strlen(base);
    error = ft_errorshori(base);
    nb = nbr;
    if(error == 1)
    {
        if(nb < 0)
        {
            ft_putchar('-');
            nb *= -1;
        }
        if(nb < len)
            ft_putchar(base[nb]);
        if(nb >= len)
        {
            ft_putnbr_base(nb / len, base);
            ft_putnbr_base(nb % len, base);
        }
    }
}

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

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int ft_errorshori(char *base)
{
    int i;
    int j;

    if(base[0] =='\0' || base[1] == '\0' )
        return(0);
    if(base[0] == '+' || base[0] == '-')
        return(0);
    i = 0;
    while(base[i] != '\0')
    {
        j = i + 1;
        while(base[j] !='\0')
        {
            if(base[i] == base[j])
                return(0);
            j++;
        }
        i++;
    }
    return(1);
}

int		main(void)
{
	ft_putnbr_base(-12, "01");
	printf("\n");
	ft_putnbr_base(40, "poneyvif");
	printf("\n");
	ft_putnbr_base(894867, "0123456789");
	printf("\n");
	ft_putnbr_base(53, "0123456789abcdef");
    printf("\n");
	ft_putnbr_base(123, "01234234");
}