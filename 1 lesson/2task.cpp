#include <iostream>
#include <cmath>
using namespace std;
double A;
int fAkk(double m, double n);

int main()
{
    double m,n;
    cin >> m >> n;
    cout << fAkk(m,n);
    return 0;
}

int fAkk(double m, double n)
{
    if(m>0 && n>0)
    {
        return fAkk(m-1,fAkk(m,n-1));
    }
    if(m>0 && n==0)
    {
        return fAkk(m-1,1);
    }
    if(m==0)
    {
        return A=n+1;
    }
}
