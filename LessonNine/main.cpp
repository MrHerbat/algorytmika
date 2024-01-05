#include <iostream>

using namespace std;

int main()
{
    int N = 10, M = 20;
    int tab[N][M];
    int x;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            int x = j*(i+1);
            tab[i][j] = 10+x;
            cout << tab[i][j] << " ";
        }
         cout << endl;
    }
}
