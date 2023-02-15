#include <unistd.h>
#include <stdio.h>

int ft_str_is_alpha(char *str);

int main()
{
    printf("英字のみ: %d\n", ft_str_is_alpha("asdfghjKL"));
    printf("数字mix: %d\n", ft_str_is_alpha("asdf098"));
    printf("記号mix: %d\n", ft_str_is_alpha("asdfgh---"));
    printf("数字のみ: %d\n", ft_str_is_alpha("123456789"));
    printf("記号のみ: %d\n", ft_str_is_alpha(".-!@#$"));
    printf("blank: %d\n", ft_str_is_alpha(""));
        // でもprintf("blank: %d\n", ft_str_is_alpha(" "));これはblankにならない、、、
        // スペースも文字らしい

}