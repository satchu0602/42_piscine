#include <unistd.h>
#include <stdio.h>


char *ft_strupcase(char *str);

int main()
{
    char str[]="asdfgh";
    printf("元の文字列: %s\n", str);
    printf("変換後: %s", ft_strupcase(str));
}