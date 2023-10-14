#include <unistd.h>
#include<stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int main(void){
    char str[] = "aaaaa";
    printf("%s\n",*ft_strncpy(str,'ab',3));
    printf("%s\n",*ft_strncpy(str,'abcde',3));
    printf("%s\n",*ft_strncpy(str,'abcde',6));
    return 0;
}