#include <stdio.h>

char *ft_strstr(char *str, char *to_find);

int main()
{
    char str[] = "test42out";
    char to_find[] = "2";
    printf("after1; %s\n", str);
    printf("before1; %s\n",to_find);
    printf("str1:%s\n", ft_strstr(str, to_find));
    printf("\n");
    char str1[] = "42out";
    char to_find2[] = "42";
    printf("after2; %s\n", str1);
    printf("before2; %s\n",to_find2);
    printf("str2:%s\n", ft_strstr(str1, to_find2));
    
}