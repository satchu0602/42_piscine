#include <unistd.h>
#include <stdio.h>

int ft_is_prime(int nb)
{
    unsigned int i;

    if (nb < 2) 
    {
        /* 2未満の場合は素数でない */
        return 0;
    }

    /* nが2〜n-1で割り切れるかどうかを確認 */
    i = 2;
    while (i < nb)
    {
        if (n % i == 0) 
        {
            /* 2〜n-1で割り切れる場合はnは素数でない */
            return 0;
        }
        i++;
    }
    return 1;
}
int main()
{
    printf("%d\n", ft_is_prime(1));
    printf("%d\n", ft_is_prime(0));
    printf("%d\n", ft_is_prime(9));
    printf("%d\n", ft_is_prime(7));

    return 0;