#include <iostream>
using namespace std;
void insertionsort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        for (; j >= 0; j--)
        {
            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
            }
            else
                break;
        }
        arr[j + 1] = temp;
    }
}
int main()
{
    int arr[10] = {12, 54, 86, 85, 11, 66, 74, 21, 99, 55};
    int n = 10;
    insertionsort(arr, 10);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}