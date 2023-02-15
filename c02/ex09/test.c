#include <unistd.h>
#include <stdio.h>

char    *ft_strcapitalize(char *str);
void    ft_strlowcase(char *c);
void    ft_strupcase(char *c);
int     ft_other(char *c);


char    *ft_strcapitalize(char *str)
{
    int i;    
    i = 0;

    while(str[i] != '\0')
   {
       ft_strupcase(str + i);
        while(ft_other(str + i) == 0 )
            {
                i++;
                ft_strlowcase(str + i);
            }
            i++;
   }
    return(str);
}

// 文字を小さくする
void    ft_strlowcase(char *c)
{
    if(*c >= 'A' && *c <= 'Z')
            *c += 32;
}

// 文字を大きくする
void    ft_strupcase(char *c)
{
        if(*c >= 'a' && *c <= 'z')
            *c -= 32;
}

// 文字でも数字でもない時
int ft_other(char *c)
{
    if((*c >= 'a') && (*c <= 'z'))
        return 0;
    else if ((*c >= 'A') && (*c <= 'Z'))
        return 0;
    else if (*c >= '0' && *c <= '9')
        return 0;
    return (1);
}

int main()
{
    char str[]="salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    printf("最初: %s\n", str);
    printf("変更後: %s", ft_strcapitalize(str));
}