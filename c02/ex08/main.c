#include <unistd.h>
#include <stdio.h>


char *ft_strlowcase(char *str);

int main()
{
    char str[]="asdASD";
    printf("元の文字列: %s\n", str);
    printf("変換後: %s", ft_strlowcase(str));
}            