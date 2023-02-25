#include "ft_boolean.h"

void ft_putstr(char *str)
{
while (*str)
write(1, str++, 1);
}
// 整数か偶数かどうかを判定するための関数
t_bool ft_is_even(int nbr)
{
// EVENマクロを使用して、nbrが偶数かどうかを判定
// 結果をTRUE、FALSEで返す
return ((EVEN(nbr)) ? TRUE : FALSE);
}
// コマンドライン引数
// ft_is_even()関数では、引数で渡された数が偶数であるかどうかを判定しています。
// argvではなくargcの数で判定する
int main(int argc, char **argv)
{
// argv自体は使わないからvoid
(void)argv;
if (ft_is_even(argc - 1) == TRUE)
ft_putstr(EVEN_MSG);
else
ft_putstr(ODD_MSG);
return (SUCCESS);
}