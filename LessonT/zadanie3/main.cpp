#include <iostream>

using namespace std;

string maleLitery(string words)
{
    int ascii;
    for(int i = 0; i<words.length();i++)
    {
        ascii = int(words[i]);
        if(ascii >64 || ascii <91)
        {
            ascii+=32;
        }
        else
        {
            ascii+=0;
        }
        words[i] = char(ascii);
    }
    return words;
}


int main()
{
    string zdanie = "Ala ma Kota o imieniu KITEK";
    string maleZdanie;
    cout << zdanie << endl;
    maleZdanie = maleLitery(zdanie);
    cout << maleZdanie;
    return 0;
}
