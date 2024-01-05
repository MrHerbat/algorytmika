#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <fstream>

using namespace std;

int n;


void selectionsort(int tab[])
{
    int temp;
    for(int i = 0; i<n-1;i++)
    {
        int min = i;
        for(int j = i+1; j<n;j++)
        {
            if(tab[j]<tab[min])
            {
                min = j;
            }
        }
        temp = tab[i];
        tab[i] = tab[min];
        tab[min] = temp;
    }
}

int main()
{
    fstream zapis;
    zapis.open("selectionsort.xls", ios::out);
    n = 10;
    int * tab = new int[n];
    srand(time(NULL));
    for(int i = 0; i<n; i++)
    {
        tab[i] = (rand()%50);
        cout << tab[i] << " ";
        zapis << tab[i] << ";";
    }
    cout << endl;
    zapis << endl;
    selectionsort(tab);
    for(int i = 0; i<n; i++)
    {
        cout << tab[i] << " ";
        zapis << tab[i] << ";";
    }
    return 0;
}
