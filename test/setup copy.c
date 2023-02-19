/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   setup.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchoquet <tchoquet@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 13:18:49 by tchoquet          #+#    #+#             */
/*   Updated: 2023/02/18 19:04:53 by mmaekawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"
#include <stdio.h>

int	factorial(int n)
// 階乗をする関数
{
	if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}

void swap(int* a, int* b) 

{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void ft_permutation(int **arr, int start, int end) 
// 全てのパターンの順列を作る関数
{
    int i;
    int j;

    j = 0;
    while(j <= factorial(j))
    {
        if (start == end) 
        // 順列をプリントする
      {
            i = 0;
            while (i <= end)
            {
                printf("%d", arr[j][i]);
                i++;
            }
            printf("\n");
        }
        else
        {
            i = start;
            while (i <= end)
                {
                // 最初の要素とiの要素を交換する
                swap(&arr[j][start], &arr[j][i]);
                // 要素の最後まで再帰する
                ft_permutation(arr, start + 1, end);
                // 最初の要素とiの要素をもう一回交換する
                swap(&arr[j][start], &arr[j][i]);
                i++;
            }
        }
    j++;
    }

}

void ft_first_perm(int *arr, int size) 
// sizeの数を１から順番に並べる
{
    int k;

    k = 0;
    while(k < size && k < size)
    {
        arr[k] = k + 1;
		// printf("perm;%d\n",arr[k]);
        k++;
    }
}

// int** generate_permutations(int n)
// {
//     int arr[n];

//     ft_first_perm(arr, n);
//     ft_permutation(arr, 0, n-1);
//     return 0;
// }
int main() 
{
    int n = 5;
    int m;
    m = factorial(n);

    int arr[m][n];
    ft_first_perm(*arr, n);
    ft_permutation(**arr, 0, n-1);
    return 0;
}

