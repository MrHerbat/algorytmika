#include <iostream>
#include <fstream>

using namespace std;

int main()
{
        //z pliku pobierz 5 zdan.
        //Wyswietl je,
        //zlicz ile w kazdym zdaniu jest spacji,
        //ile we wszystkich zdaniach jest liter (e/E),
        //kazdy znak bêd¹cy liter¹ k zamieñ na znak *
        //zmienione zdania wyœlij do pliku

    ifstream odczyt("zdania.txt");
    ofstream zapis ("noweZdania.txt");
    int sumE,sumBlank;
    string zdanie;
    for(int i = 0; i<5;i++)
    {
        sumBlank = 0;
        getline(odczyt,zdanie);
        cout << zdanie << endl;
        for(int j = 0; j<zdanie.length();j++)
        {
            if(zdanie[j]==' ')
            {
                sumBlank++;
            }
            if(zdanie[j]=='e' || zdanie[j]=='E')
            {
                sumE++;
            }
            if(zdanie[j]=='k')
            {
                zdanie[j] = '*';
            }
        }
        cout << zdanie << endl;
        cout << "Number of spaces: " << sumBlank << endl;
        zapis << zdanie << "\n";
    }
    cout << "Number of 'e/E' in all sentences: " << sumE << endl;
    return 0;
}
