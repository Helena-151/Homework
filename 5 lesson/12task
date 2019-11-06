#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    bool E[n+1];

    for(int i=0; i<n+1; E[i++]=1);

    for(int i=2; i<n+1; i++)
    {
        if(E[i]==1)
        {
            for(int j=2; j<((n+1)/i)+1; j++)
            {
                E[i*j]=0;
            }
        }

    }
    if(E[n]==0)
        cout << "ne prostoe";
    if(E[n]==1)
        cout << "prostoe";
    return 0;
}
