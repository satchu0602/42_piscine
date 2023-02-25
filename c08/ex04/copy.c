#include "ft_stock_str.h"
#include <stdlib.h>

// 文字列の配列とそのサイズを引数に受け取り、各要素を構造体に変換します。
// 構造体は、文字列の長さ、文字列、そして文字列のコピーを格納するように定義されています。
// 与えられた文字列の配列を反復処理して、それぞれの要素について構造体を初期化する

struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
    int i;
    t_stock_str *tab;
	// s_stock_str構造体の配列tab

    tab = (t_stock_str*)malloc(sizeof(*tab) *(ac + 1));
	// 動的に確保
	// 要素数はac+1とし、最後の要素にはNULLポインタを格納するための領域を確保
    if (tab == NULL)
        return (NULL);
		// 配列 tab の最後の要素は NULL ポインタで初期化されます。
		// tab 配列を使用する際に、最後の要素に到達することを示すために使用されます。
    i = 0;
    while (i < ac)
    {
		// 確保された配列tabに、文字列配列avの要素をs_stock_str構造体のメンバーに変換して格納します。
        tab[i].size = ft_strlen(av[i]);
		// tab[i].sizeには文字列av[i]の長さ
        tab[i].str = av[i];
		// tab[i].strには文字列av[i]自体
        tab[i].copy = ft_strdup(av[i]);
		// tab[i].copyには文字列av[i]のコピー
        if (tab[i].copy == NULL)
            return (NULL);
		// コピーの確保に失敗した場合はNULLを返します。
        i++;
    }
    tab[i].str = 0;
    return (tab);
    }

// 文字の長さを返す
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

// 与えられた文字列のコピーを作成し、そのポインタを返す
char	*ft_strdup(char *src)
{
	int		index;
	char	*dest;

	index = 0;
	dest = (char *)malloc(ft_str_length(src) * sizeof(char) + 1);
	if (!dest)
	{
		return (NULL);
	}
	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}
