#include <unistd.h>
#include <stdio.h>

int ft_str_is_lowercase(char *str);

int main()
{
    printf("小文字のみ: %d\n", ft_str_is_lowercase("asdfgh"));
    printf("数字mix: %d\n", ft_str_is_lowercase("asdf098"));
    printf("大文字mix: %d\n", ft_str_is_lowercase("asdfghLLKJ"));
    printf("数字のみ: %d\n", ft_str_is_lowercase("123456789"));
    printf("記号のみ: %d\n", ft_str_is_lowercase(".-!@#$"));
    printf("blank: %d\n", ft_str_is_lowercase(""));
        // でもprintf("blank: %d\n", ft_str_is_lowercase(" "));これはblankにならない、、、

}