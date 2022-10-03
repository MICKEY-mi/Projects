#include <iostream>
using namespace std;
void sortOne(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start < end)
    {
        if (arr[start] == 0 && arr[end] == 1)
        {
            start++;
            end--;
        }
        else if (arr[start] == 1 && arr[end] == 1)
        {
            end--;
        }
        else if (arr[start] == 1 && arr[end] == 0)
        {
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
        else if (arr[start] == 0 && arr[end] == 0)
        {
            start++;
        }
    }
}
int main()
{
    int arr[8] = {1, 0, 1, 1, 0, 1, 1, 0};
    sortOne(arr, 8);
    for (int i = 0; i < 8; i++)
    {
        cout << arr[i] << " ";
    }
}