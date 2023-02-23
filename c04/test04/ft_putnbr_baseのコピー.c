#include <unistd.h>

void ft_putnbr_base(int nbr, char *base) 
{
    // ベースの長さを計算
    int base_len = 0;
    while (base[base_len] != '\0') 
    {
        if (base[base_len] == '+' || base[base_len] == '-') 
        {
            // 無効なベースが与えられた場合は何も出力せずに関数を終了する
            return;
        }
        for (int j = base_len + 1; base[j] != '\0'; j++) {
            if (base[j] == base[base_len]) 
            {
                // 無効なベースが与えられた場合は何も出力せずに関数を終了する
                return;
            }
        }
        base_len++;
    }
    if (base_len <= 1) 
    {
        // 無効なベースが与えられた場合は何も出力せずに関数を終了する
        return;
    }

    // 符号を出力
    if (nbr < 0) 
    {
        write(1, "-", 1);
        nbr = -nbr;
    }

    // 数値をベースシステムに変換して出力
    char num_str[32];
    int i = 0;
    while (nbr > 0) {
        num_str[i++] = base[nbr % base_len];
        nbr /= base_len;
    }
    for (int j = i - 1; j >= 0; j--) {
        write(1, &num_str[j], 1);
    }
}

int main(void) {
    int nbr = 123;
    char *base = "01";
    ft_putnbr_base(nbr, base);
    return 0;
}
