#include <iostream>
long int a;
int N;
using namespace std;
void f(int n,long int a);
int main()
{

    cin >> N;
    for(int i=1; i<10; i++)
    {
        f((N-2)/2,i);
    }

    return 0;
}

void f(int n,long int a)
{
    if(n==0)
    {
        long int A=a,l=0;
        int k=1;
        for(int i=0; i<N/2; i++)
        {
            l=l*10+((A/k)%10);
            k*=10;
        }
        if(A%10==0)
        {
            if(N%2==0)
            {
                cout << a <<"0"<< l << endl;
            }
        else
            {
                for(int s=0; s<10; s++)
                cout << a << s <<"0"<< l << endl;
            }
        }
        else
        {
            if(N%2==0)
            {
                cout << a << l << endl;
            }
        else
            {
                for(int s=0; s<10; s++)
                cout << a << s << l << endl;
            }
        }
    }
    else
    {
        for(int j=0; j<10; j++)
        {
            f(n-1,a*10+j);
        }
    }
    
}
