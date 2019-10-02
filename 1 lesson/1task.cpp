#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n,a,s=1,z=0;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> a;
        for (int k=1; k<=a; k++)
        {
            s*=k;
        }
        z+=s;
        s=1;
    }
    cout << z/n;
    return 0;
}
