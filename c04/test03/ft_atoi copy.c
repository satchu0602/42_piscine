#include <unistd.h>

// 空白文字をスキップする
int ft_isspace(char c)
{
    return (c == ' ' || c == '\t' || c == '\n' ||
            c == '\r' || c == '\v' || c == '\f');
}

// 符号の処理を行う
int	sign_processing(char *str, int *ptr_i)
{
    int	count;
    int	i;

    i = 0;
    count = 1;
    while (str[i] && ft_isspace(str[i]))
        i++;
    while (str[i] && (str[i] == '+' || str[i] == '-'))
    {
        if (str[i] == '-')
            count *= -1;
        i++;
    }
    *ptr_i = i;
    return (count);
}
// 符号の処理後、空白文字をスキップして数字を取り出し、10進数の整数値に変換
int	ft_atoi(char *str)
{
    int	sign;
    int	result;
    int	i;

    result = 0;
    sign = sign_processing(str, &i);
    while (str[i] && str[i] >= '0' && str[i] <= '9')
	//  (str[i] >= '0' && str[i] <= '9')これでもいい
	// str[i]がNULL文字でなく、かつ数字の文字である場合にループを継続する
    {
        result = result * 10 + (str[i] - '0');
		// 10をかけることで桁を変えている
		// 48('0') を減算することで、数値としての値を取得
        i++;
    }
    result *= sign;
    return (result);
}
