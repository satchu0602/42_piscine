#include <unistd.h>
#include <stdio.h>

void ft_swap(int *a, int *b);


int main(void)
{
  int a = 0, b = 1;
 
  printf("pre-swap:  a = %d, b = %d\n", a, b);
  ft_swap(&a, &b);
  printf("post-swap: a = %d, b = %d\n", a, b);
 
  return 0;
}