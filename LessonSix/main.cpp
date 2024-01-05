#include <iostream>
#include <time.h>
#include <fstream>


using namespace std;
int size;

void bubblesort(int tab[], int size)
{
    for (int i = 1; i < size; i++)
    {
        for (int j = 0; j < size-i; j++)
        {
            if(tab[j] > tab[j+1])
            {
                int temp = tab[j];
                tab[j] = tab[j+1];
                tab[j+1] = temp;
            }
        }
    }
}

int main()
{
    ofstream zapis("posortowane.txt");
    srand(time(NULL));
    cout << "Podaj rozmiar tablicy: ";
    cin >> size;
    cout << endl;
    int * tab = new int[size];
    for (int i = 0; i < size; i++)
    {
        tab[i] = rand();
    }

    bubblesort(tab, size);

    for (int i = 0; i < size; i++)
    {
        cout << tab[i] << " | ";
        zapis<<tab[i]<<" | ";
    }
}
