#include <iostream>

using namespace std;

int main()
{

    string miasto;
    int sumA;
    cout << "Podaj nazwa miasta: ";
    getline(cin,miasto);
    cout << endl << "Ilosc liter w nazwie miasta: " << miasto.length();
    cout << endl << "Podales miasto o nazwie " << miasto;
    for(int i = 0; i < miasto.length();i++)
    {
        if(miasto[i] == 'a')
        {
            sumA++;
        }
    }
    cout << endl << "Ilosc litery 'a' w nazwie tego maista wynosi " << sumA << endl;
    return 0;
}
