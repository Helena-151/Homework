#include <iostream>
#include <cmath>
using namespace std;
int n;

bool Eratosfen(float n)
{
    bool P[(int)n+2];
    for(int i=0; i<(int)n+2; P[i++]=1);
    for(int i=2; i<(int)n+2; i++)
    {
        if(P[i]==1)
        {
            for(int j=2; j<(((int)n+2)/i)+1; j++)
                P[i*j]=0;
        }
    }
    if(P[(int)n]==1 && n-(int)n==0)
        return 1;
    else
        return 0;
}

void Mersen(int n)
{
    bool E[n+1];
    for(int i=0; i<n+1; E[i++]=1);
    int k;
    for(int i=1; i<(int)(log(n+2)/log(2))+1; i++)
    {
        k=pow(2,i)-1;
        E[k]=0;
    }
    if(E[n]==0)
        cout << "Chislo Mersena" << endl;
    if(E[n]==1)
        cout << "Ne chislo Mersena" << endl;
}

void Ferma(int n)
{
    bool E[n+1];
    for(int i=0; i<n+1; E[i++]=1);
    int k;
    for(int i=0; i<(int)(log(log(n+2)/log(2))/log(2))+1; i++)
    {
        k=pow(2,pow(2,i))+1;
        E[k]=0;
    }
    if(E[n]==0)
        cout << "Chislo Ferma" << endl;
    if(E[n]==1)
        cout << "Ne chislo Ferma" << endl;
}

void Vilson(int n)
{
    int A=1;
    for(int j=1; j<n; A*=j++);
    if((A+1)%(n*n)==0 && Eratosfen(n)==1)
        cout << "Chislo Vilsona" << endl;
    else
        cout << "Ne chislo Vilsona" << endl;
}

void Vagstaf(int n)
{
    if(Eratosfen(log(3*n-1)/log(2))==1 && Eratosfen(n)==1)
        cout << "Chislo Vagstafa" << endl;
    else
        cout << "Ne chislo Vagstafa" << endl;
}

void Viverich(int n)
{
    if((long int)(pow(2,n-1)-1)%(n*n)==0 && Eratosfen(n)==1)
        cout << "Chislo Vivericha" << endl;
    else
        cout << "Ne chislo Vivericha" << endl;
}

void SophiGermen(int n)
{
    if(Eratosfen(2*n+1)==1 && Eratosfen(n)==1)
        cout << "Chislo Sophi Germen" << endl;
    else
        cout << "Ne chislo Sophi Germen" << endl;
}

void Hyggs(int n)
{
    bool E[n+1];
    for(int i=0; i<n+1; E[i++]=1);
    int s=1;
    for(int i=2; i<n+1; i++)
    {
        if((s*s)%(i-1)==0 && Eratosfen(i)==1)
            s*=i;
        else
            E[i]=0;
    }
    if(E[n]==1 && Eratosfen(n)==1)
        cout << "Chislo Hyggsa" << endl;
    else
        cout << "Ne chislo Hyggsa" << endl;
}

int main()
{
    cin >> n;
    Mersen(n);
    Ferma(n);
    Vilson(n);
    Vagstaf(n);
    Viverich(n);
    SophiGermen(n);
    Hyggs(n);

    return 0;
}
