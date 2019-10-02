#include <iostream>
#include <cmath>
using namespace std;
void dell_odd(int *&arr, int &size)
{
    int k=size, l=0;
    int *arr1 = new int[k];
    size=0;
    for(int i=0; i<k; i++)
    {
        *(arr1+i)=*(arr+i);
        if(*(arr+i)%2!=0)
        {
            size++;
        }
    }
    delete []arr;
    arr = new int[size];
    for(int i=0; i<k; i++)
    {
        if(*(arr1+i)%2!=0)
        {
            *(arr+l)=*(arr1+i);
            l++;
        }
    }
    delete []arr1;
}
int main()
{
    int size,temp,k;
    cin >> size;
    int *arr = new int[size];
    for(int i=0; i<size; cin >> arr[i++]);
    dell_odd(arr,size);
    for(int i=0; i<size; cout << arr[i++] << "\t");
    delete []arr;
    return 0;
}
