#include <iostream>
#include <time.h>
#include <stdlib.h>


using namespace std;

double pi()
{
    double r = 1;
    double Ikw = 1000000000;
    double Iko = 0;
    double x, y;

    for(int i = 1; i < Ikw; i++)
    {
        x = (double)rand()/RAND_MAX;
        y = (double)rand()/RAND_MAX;

         if((x*x)+(y*y) <= r*r)
         {
             Iko++;
         }
    }

     double Pi = (4*Iko)/Ikw;
     return Pi;

}

int main()
{
    srand(time(NULL));
    cout << pi();

    return 0;
}
