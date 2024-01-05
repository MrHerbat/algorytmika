#include <iostream>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <fstream>

using namespace std;

int N = 30;

void insertionsort(int tab[])
{
    int temp, k;
    for (int i = 1; i < N; i++)
    {
        temp = tab[i];
        k = i-1;
        while(k>=0 && tab[k] > temp)
        {
            tab[k+1] = tab[k];
            k = k-1;
        }
        tab[k+1] = temp;
    }

}

int main()
{
    ofstream zapis ("insertsort.txt");
    srand(time(NULL));
    int tab[N];
    for (int i = 0; i < sizeof(tab)/4; i++)
    {
        tab[i] = (rand()%100)+1;
        cout << tab[i] << " ";
        zapis << tab[i] << " ";
    }
    cout << endl;
    zapis << endl;
    insertionsort(tab);
    for (int i = 0; i < sizeof(tab)/4; i++)
    {
        cout << tab[i] << " ";
        zapis << tab[i] << " ";
    }

}
