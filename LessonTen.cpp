//Zad 1
//tablicę dwuwymiarową, gdzie ilosc wierszy i kolumn podaje użytkownik wypełnij liczbami losowymi dwucyfrowymi, pokaż wykonaną tablicę. Następnie posortować jej elementy po wierszach

#include <iostream>
#include <time.h>
#include <math.h>
#include <stdlib.h>


using namespace std;

void sort(int tab[], int w)
{
    int temp, k;
    for (int i = 1; i < w; i++)
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


int main() {
    srand(time(NULL));
    int w,k;
    cout << "Podaj ilosc wierszy tablicy: ";
    cin >> w;
    cout << endl;
    cout << "Podaj ilosc kolumn tablicy: ";
    cin >> k;
    int tab[w][k];
    cout << "Tablica nie posortowana: " << endl;
    for(int i = 0; i<w;i++)
    {
        for(int j = 0; j<k;j++)
        {
            tab[i][j] = (rand()%90)+10;
            cout << tab[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    cout << endl;
    cout << "Tablica posortowana: " << endl;
    for(int i = 0; i<w;i++)
    {
        sort(tab[i],k);
        for(int j = 0; j<k;j++)
        {
            cout << tab[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}








//Zad 2
//wyznacz ilość liczb pierwszych znajdujących się w przedziale <2,n> i jeżeli ta ilość jest parzysta, to liczby pierwsze z tego przedziału zapisz do pliku, a jeśli nieparzyste - wyświetl na ekranie. "n" podaje użytkownik
#include <iostream>
#include <time.h>
#include <math.h>
#include <stdlib.h>

using namespace std;

int main() 
{
    int n, suma;
    
    cout << " Podaj zakres gorny przedzialu (wiekszy niz 2): ";
    cin >> n;
    n++;
    suma = n;
    cout << endl;
    bool tab[n];
    for(int i = 2; i < n;i++)
    {
        tab[i] = true;
    }
    for (int i = 2; i*i<n; i++)
    {
        for(int j =2; j < n; j++)
        {
            if(j%i == 0 && (i!=2 || i!=3))
            {
                tab[j] = false;
                suma--;
            }
        }
    }
    for(int i = 0; i < n; i++)
    {
        if(tab[i] == true)
        {
            cout << i << " ";
        }
    }
    return 0;
}








//Zad 3
//Wylosuj 10 liczb całkowitych od 10 do 50 i obok każdej z nich napisz jej postać w systemie binarnym

#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <math.h>

using namespace std;

void zamiana(int n)
{
	int i=0;
	int tab[32];

	while(n>0)
	{
	    tab[i] = n%2;
	    n = n/2;
	    i++;
	}
	i++;
	for(int j=i;j>=0;j--)
	{
	    cout<<tab[j];
	}
}

int main()
{
    srand(time(NULL));
	int n;


    for(int i = 0; i<10; i++)
    {
        n = (rand()%40)+10;
        cout<<n<<" | ";
	    zamiana(n);
	    cout<<endl;
    }
	

	return 0;
}








