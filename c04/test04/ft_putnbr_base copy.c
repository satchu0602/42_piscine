/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skameyam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 14:52:38 by skameyam          #+#    #+#             */
/*   Updated: 2023/02/21 14:59:04 by skameyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putnbr_base(int nbr, char *base) 
{
    int	j;
	int base_len = 0;
    base_len = 0;
	while (base[base_len] != '\0') 
	{
		if (base[base_len] == '+' || base[base_len] == '-')
        {
			return;
        }
        j = base_len + 1;
		while (base[j] != '\0') 
		{
            if (base[j] == base[base_len])
                j++;
				return;
        }
        base_len++;
    }
    if (base_len <= 1) 
    {
        return;
    }
    if (nbr < 0) 
    {
        write(1, "-", 1);
        nbr = -nbr;
    }

    char num_str[32];
    int i = 0;
    while (nbr > 0) 
    {
        num_str[i++] = base[nbr % base_len];
        nbr /= base_len;
    }
    j = i - 1;
    while (j >= 0) 
    {
        write(1, &num_str[j], 1);
        j--;
    }
}

int main(void) {
    int nbr = 123;
    char *base = "01";
    ft_putnbr_base(nbr, base);
    return 0;
}
// これじゃ関数が長すぎてダメだ！w