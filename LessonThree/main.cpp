#include <iostream>
#include <time.h>
#include <fstream>
#include <stdlib.h>

using namespace std;

int main()
{
    ofstream zapis("figura.xls");
    srand(time(NULL));
    float x,y;
    int i = 0;
    while(i<500)
    {
        x = (float)(rand()/RAND_MAX)*2;
        y = (float)(rand()/RAND_MAX)*2;
        if(x*x+y*y>=4)
        {
            zapis<<x<<";"<<y<<endl;
        }
        i++;
    }
    zapis.close();

    return 0;
}
