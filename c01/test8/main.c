#include <unistd.h>
#include <stdio.h>

void ft_sort_int_tab(int *tab, int size);

int main(){
	int tab[3] = {2,1,9};
	int size;
	size = 0;
	for(int i=0; i<size; i++)
	{
		printf("%d",tab[i]);
	}
	printf("\n");
	ft_sort_int_tab(tab,size);
	for(int i=0; i<size; i++)
	{
		printf("%d",tab[i]);
	}
	return 0;
}