#include <unistd.h>
#include <stdio.h>

int  ft_str_is_printable(char *str);

int main()
{
    printf("見える文字: %d\n",  ft_str_is_printable("ABDELKFSCO?I340990%"));
    printf("見えない文字: %d\n",  ft_str_is_printable("\n\t\v\f"));
    printf("blank: %d\n",  ft_str_is_printable(""));

}