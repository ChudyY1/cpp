#include <iostream>

auto quicksort(int *tablica, int lewy, int prawy) -> void
{
    int v=tablica[(lewy+prawy)/2];
    int i,j,x;
    i=lewy;
    j=prawy;
    do
    {
        while(tablica[i]<v) i++;
        while(tablica[j]>v) j--;
        if(i<=j)
        {
            x=tablica[i];
            tablica[i]=tablica[j];
            tablica[j]=x;
            i++;
            j--;
        }
    }
    while(i<=j);
    if(j>lewy) quicksort(tablica,lewy, j);
    if(i<prawy) quicksort(tablica, i, prawy);
}

auto quicksort1(int a[], int n) -> void
{
	quicksort(a, 0, n-1);
}

int main()
{
	int tab[10] = {3,64,3,9,234,76,-11,2,3,5};
	quicksort1(tab, 10);
	
	for(int i : tab)
	{
		std::cout << i << " ";
	}
	std::cout << std::endl;
	
	return 0;
}
