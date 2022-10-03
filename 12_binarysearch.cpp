#include <iostream>
using namespace std;
int  binary(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int mid=(start+end)/2;
    while (start <= end)
    {
        if(key==arr[mid])
        return mid;
        else if(key<arr[mid])
        end=mid-1;
        else
        start=mid+1;
        mid=(start+end)/2;
    }
    return -1;
}
int main()
{
    int arr[10] = {0, 1, 2, 3, 55, 65, 66, 67, 68, 69};
    int index = binary(arr, 10, 69);
    if(index==-1)
    cout<<"key is not present"<<endl;
    else
    cout<<arr[index]<<" is present at "<<index<<" index."<<endl;  
}