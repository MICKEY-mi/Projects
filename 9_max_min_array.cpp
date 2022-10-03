#include <iostream>
#include <math.h>
using namespace std;
int max(int arr[],int n)
{
    int M = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > M)
            M = arr[i];
    }
    return M; 
}
int min(int arr[],int n)
{
    int m = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < m)
            m = arr[i];
    }
    return m; 
}

int main()
{
    int n;
    cin>>n;
    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout<< arr[i];
    }

    cout <<endl<<"max is : "<<max(arr,n)<<endl;
    cout<<"min is : "<<min(arr,n);
}