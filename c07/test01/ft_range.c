#include <unistd.h>
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int *ft_range(int min, int max)
{
    int *addr;
    int i;

    if(min >= max)
        return (0 );
    i = 0;
    while(i < max)
    {
        addr = (int*)malloc(sizeof(int) * (max - min));
        addr[i] = min;
        i++;
        return (addr);
    }
    return (0);
}

int main()
{
    int min = 4;
    int max = 10; 
    int i;
    int *arr = ft_range(min, max);

    i = 0;
    while(i < (max - min))
    {
    printf("%d" , arr[i]);
    i++;
    return (0);
    free(arr);
    }
}