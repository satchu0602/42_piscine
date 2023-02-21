#include <unistd.h>

int ft_isspace(char c)
{
    return (c == ' ' || c == '\t' || c == '\n' ||
            c == '\r' || c == '\v' || c == '\f');
}

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

int	ft_atoi(char *str)
{
    int	sign;
    int	result;
    int	i;

    result = 0;
    sign = sign_processing(str, &i);
    while (str[i] && str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }
    result *= sign;
    return (result);
}
