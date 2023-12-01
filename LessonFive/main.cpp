#include <iostream>
#include <time.h>

using namespace std;
int NWD(int a, int b)
{
    while(a!=b)
    {
        if(a>b)
        {
            a=a-b;
        }else{
            b=b-a;
        }
    }
    return a;
}
int main()
{
    srand(time(NULL));
    int x,y,a,b;
    a = 50;
    b = 10;
    x = rand()%(a+1-b)+b;
    y = rand()%(a+1-b)+b;
    cout << x << " " <<y << endl;

    NWD(x,y);

    return 0;
}
