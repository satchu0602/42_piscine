#include <unistd.h>
#include <stdio.h>

int ft_str_is_uppercase(char *str);

int main()
{
    printf("大文字のみ: %d\n", ft_str_is_uppercase("ASDFGHJ"));
    printf("数字mix: %d\n", ft_str_is_uppercase("asdf098"));
    printf("小文字mix: %d\n", ft_str_is_uppercase("asdfghLLKJ"));
    printf("数字のみ: %d\n", ft_str_is_uppercase("123456789"));
    printf("記号のみ: %d\n", ft_str_is_uppercase(".-!@#$"));
    printf("blank: %d\n", ft_str_is_uppercase(""));
        // でもprintf("blank: %d\n", ft_str_is_uppercase(" "));これはblankにならない、、、

}