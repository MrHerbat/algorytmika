#include <iostream>
#include <fstream>

using namespace std;

bool ANaKoncu(string slowo)
{
    if(slowo[slowo.length()-1] == 'A')
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool wewnatrzSiebie(string slowo, string slowo2)
{
    int i =0;
    if(slowo.length()<=slowo2.length())
    {
        for(int j=0;j<slowo2.length();j++)
        {
            if(slowo[i]==slowo2[j])
            {
                i++;
            }
        }
        if(i==slowo.length()-1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

int main()
{
    string slowo,slowo2;
    int liczba;
    ifstream odczyt("slowa.txt");
    for(int i=0;i<2000;i++)
    {
        odczyt>>slowo;
        if(ANaKoncu(slowo))
        {
            liczba++;
            cout<< slowo << endl;
        }
    }
    cout << "Liczba wyrazow zakonczona 'A':"<<liczba<<endl;
    cout << "----------------------------------------" <<endl;
    odczyt.close();
    ifstream odczyt2("slowa.txt");
    liczba=0;
    for(int i = 0; i<1000;i++)
    {
        odczyt2>>slowo;
        odczyt2>>slowo2;
        if(wewnatrzSiebie(slowo,slowo2))
        {
            liczba++;
            cout<<slowo <<"|"<<slowo2<<endl;
            cout << "wiersz numer: "<<i<<endl;
        }

    }
    cout<<"liczba par zawierajacych pierwsze slowo w drugim: "<<liczba<<endl;

    return 0;
}
