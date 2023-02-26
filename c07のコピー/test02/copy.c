#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		bound;
    // 生成される配列のサイズ
	int		index;
    // 配列内の要素を操作するために使用
	int		*buffer;
    // 生成された配列を指すポインタ
	int		*d;
    // bufferと同じアドレスを指すために使用

	if (min >= max)
	{
		*range = 0;
		return (0);
        // 最小値が最大値より大きい場合は０を返す
	}
	bound = max - min;
    // 指定された範囲の幅を計算して割り当てる
	d = (buffer = malloc(bound * sizeof(int)));
    // dに、bufferが指す領域のアドレスを割り当てます。
    // 同時に、mallocを使用して配列のメモリを割り当て、bufferにそのアドレスを設定します。
	if (!d)
    // dがNULLの場合の条件分岐を開始します。
	{
		*range = 0;
		return (-1);
        // メモリの割り当てが失敗した場合に−１する。
        // エラーの場合は、-1を返すという条件があるから
	}
	*range = buffer;
    // 生成された配列を呼び出し元に返す
    // 関数がrangeのサイズを返すように実装する必要があるから
	index = 0;
	while (index < bound)
	{
		buffer[index] = min + index;
		index++;
        // 指定された範囲内の整数が生成された配列に格納されます。
	}
	return (bound);
}

int		main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	size;
	int	i = 0;

	min = 5;
	max = 10;
	size = ft_ultimate_range(&tab, min, max);
	while(i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}

}