// strncmp関数は文字列を比較する関数
//  string(文字列) compare(比較する)

#include <unistd.h>
#include <stdio.h>

int ft_strcmp(char *s1, char *s2);

// <書き間違え①>
// ft_strcmp(char *s1, char *s2)
// {
//     int i;
//     int j;
    
//     i = 0;
//     j = 0;
//     whlie(s1 != '\0')
//     {
//         i++;
//         j++;
//         return(s1[i] - s2[j]);
//     }
// }

int ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
    while(s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
    // s1[i] == s2[i] は、文字列 s1 と文字列 s2 の、同じ位置（インデックス i）にある文字が等しいかどうかを比較しています。
    // もし等しい場合は真（true）を返し、等しくない場合は偽（false）を返します。
    {
        i++;
        printf("%d\n s1;%d\n" "s2;%d\n",i,s1[i],s2[i] );
    }
    return(s1[i]-s2[i]);
}

int main()
{
    char s1[]="testest";
    char s2[]="test";
    printf("result; %d", ft_strcmp(s1,s2));
}