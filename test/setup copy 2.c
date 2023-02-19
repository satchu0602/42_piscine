#include "rush01.h"
#include <stdio.h>

int	factorial(int n)
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
{
    int i;
    int j;

    j = 0;
    while(j < factorial(end - start + 1))
    {
        if (start == end) 
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
                swap(&arr[j][start], &arr[j][i]);
                ft_permutation(arr, start + 1, end);
                swap(&arr[j][start], &arr[j][i]);
                i++;
            }
        }
        j++;
    }
}

void ft_first_perm(int *arr, int size) 
{
    int k;

    k = 0;
    while(k < size)
    {
        arr[k] = k + 1;
        k++;
    }
}

int main() 
{
    int n = 5;
    int m;
    m = factorial(n);

    int arr[m][n];
    int i = 0;
    while (i < m)
    {
        ft_first_perm(arr[i], n);
            i++;
    }
    ft_permutation((int **)arr, 0, n-1);
    return 0;
}

