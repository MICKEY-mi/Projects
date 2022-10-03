#include <iostream>
using namespace std;
bool ifpossible(int arr[], int n, int m, int mid)
{
    int studentcount = 1;
    int pagesum = 0;
    for (int i = 0; i < n; i++)
    {
        if (pagesum + arr[i] <= mid)
        {
            pagesum += arr[i];
        }
        else
        {
            studentcount++;
            if (studentcount > m || arr[i] > mid)
            {
                return false;
            }
            pagesum = arr[i];
        }
    }
    return true;
}
int book(int arr[], int n, int m)
{
    int start = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int end = sum;
    int ans = -1;
    int mid = (start + end) / 2;
    while (start <= end)
    {
        if (ifpossible(arr, n, m, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
            start = mid + 1;
        mid = (start + end) / 2;
    }
    return ans;
}
int main()
{
    int m;
    cout<<"Enter the number of students : "<<endl;
    cin>>m;
    int arr[5]={10,30,20,40,50};
    int ans = book(arr,5,m);
    cout<<ans<<endl;

    return 0;
}