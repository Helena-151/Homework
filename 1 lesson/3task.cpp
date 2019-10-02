#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int size,temp;
    cin >> size;
    int *arr = new int[size];
    for(int i=0; i<size; cin >> arr[i++]);

     for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (*(arr+j) > *(arr+j+1))
            {
                temp = *(arr+j);
                *(arr+j) = *(arr+j+1);
                *(arr+j+1) = temp;
            }
        }
    }

    for(int i=0; i<size; cout << arr[i++] << "\t");
    delete []arr;
    return 0;
}
