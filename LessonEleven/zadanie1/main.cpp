#include <iostream>

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
    a = NaMale(a);
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

int main()
{
    string a = "BarOK";
    string b = "rOBAK";
    cout << Bubblesort(a) << endl;
    cout << Bubblesort(b) << endl;
    cout << "Czy anagram? ";
    if(CzyAnagram(a,b) == 1)
    {
        cout << "tak" << endl;
    }
    else
    {
        cout << "nie" << endl;
    }
    return 0;
}
