#include <iostream>
#include <fstream>


using namespace std;

int czynnikiPierwsze(int x)
{
    int i = 2;
    while(x!=1)
    {
        if(x%i==0)
        {
            cout << i <<" ";
            x=x/i;
        }else{
            i++;
        }
    }
}


int main()
{
    fstream plik;
    plik.open("liczby.txt", ios::in);
    int x;
    for(int i =0; i<10; i++)
    {
        plik>>x;
        cout << x << "-> ";
        czynnikiPierwsze(x);
        cout << endl;
    }



    return 0;
}
