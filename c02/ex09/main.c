#include <unistd.h>
#include <stdio.h>

char    *ft_strcapitalize(char *str);
void    ft_strlowcase(char *c);
void    ft_strupcase(char *c);
int     ft_other(char *c);

int main()
{
    char str[]="salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    printf("最初: %s\n", str);
    printf("変更後: %s", ft_strcapitalize(str));
}