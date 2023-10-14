#include <unistd.h>
#include <stdio.h>

void ft_rev_int_tab(int *tab, int size);

int main(){
	int tab[3] = {0,1,1};
	int size;
	size = 3;

	for(int i=0; i<size; i++)
	{
		printf("%d",tab[i]);
	}
	printf("\n");
	ft_rev_int_tab(tab,size);
	for(int i=0; i<size; i++)
	{
		printf("%d",tab[i]);
	}
	return 0;
}
