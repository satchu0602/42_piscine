#include <unistd.h>
#include <stdio.h>

int ft_str_is_numeric(char *str);

int main()
{
    printf("数字のみ: %d\n", ft_str_is_numeric("123456789"));
    printf("記号のみ: %d\n", ft_str_is_numeric(".-!@#$"));
    printf("英字のみ: %d\n", ft_str_is_numeric("asdfghjkl"));
    printf("英字mix: %d\n", ft_str_is_numeric("asdf098"));
    printf("記号mix: %d\n", ft_str_is_numeric("3456---"));
    printf("blank: %d\n", ft_str_is_numeric(""));
        // でもprintf("blank: %d\n", ft_str_is_numeric(" "));これはblankにならない、、、

}