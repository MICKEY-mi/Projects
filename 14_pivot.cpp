#include<iostream>
using namespace std;
int pivot(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else
        e=mid;
        mid=s+(e-s)/2;
    }

    return s;
}
int main(){
    int arr[10]={9,10,11,12,2,3,4,5,6,7};
    int index= pivot(arr,10);
    cout<<"index is : "<<index<<endl;
    cout<<"element is "<<arr[index]<<endl;
}