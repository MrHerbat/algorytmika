#include <iostream>
#include <fstream>

using namespace std;

string NaMale(string a)
{
    for(int i = 0; i< a.length();i++)
    {
        if(a[i] >= 'A' && 'Z' >= a[i])
        {
            a[i]=a[i]+32;
        }
    }
    return a;
}

string Bubblesort(string a)
{
    NaMale(a);
    char temp;
    for(int i = 0; i < a.length()-1; i++)
    {
        for(int j = 0; j < a.length()-1; j++)
        {
            if(a[j]>a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    return a;
}
bool CzyAnagram(string a, string b)
{
    if(Bubblesort(a) == Bubblesort(b)){ return true; }
    return false;
}

bool Rowne(string a[])
{
    int n = a[0].length();
    for(int i = 0; i<5;i++)
    {
        if(a[i].length() != n)
        {
            return false;
        }
    }
    return true;
}
bool WszystkieAnagramy(string a[])
{
    for(int i = 1;i<4;i++)
    {
        if(!CzyAnagram(a[i], a[0]));
        {
            return false;
        }
    }
    return true;
}

int main()
{
    ifstream odczyt("anagram.txt");
    ofstream zapisA ("odp_4a.txt");
    ofstream zapisB ("odp_4b.txt");


    string tab[5];
    for(int i = 0;i<200;i++)
    {
        for(int j = 0; j<5;j++)
        {
            odczyt>>tab[j];
        }
        if(Rowne(tab))
        {
            for(int k = 0; k<5;k++)
            {
                zapisA<<tab[k]<<" ";
            }
            zapisA<<endl;
        }
        if(WszystkieAnagramy(tab))
        {
            for(int k = 0; k<5;k++)
            {
                zapisB<<tab[k]<<" ";
            }
            zapisB<<endl;
        }

        cout << endl;
    }
    return 0;
}
