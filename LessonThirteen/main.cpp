#include <iostream>

using namespace std;

int spacje(string a)
{
    int liczba = 0;
    for(int i = 0; i<a.length();i++)
    {
        if(a[i]==' ')
        {
            liczba++;
        }
    }
    return liczba;
}


int main()
{
    //pobierz od u¿ytkownika 3 zdania i sprawdŸ ile w ka¿dym z nich jest spacji
    string zdanie;
    int z = 0;
    for(int i =0; i<3;i++)
    {
        cout<<"Podaj jakies zdanie: ";
        getline(cin,zdanie);
        cout<<"ilosc spacji w zdaniu: " <<spacje(zdanie)<<endl;
        z += spacje(zdanie);
    }
    cout<<"suma wszystkich spacji: "<<z<<endl;
    return 0;
}
