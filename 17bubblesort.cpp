#include<iostream>
using namespace std;
void bubblesort(int arr[],int n){

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
        if(arr[j+1]<arr[j]){
            swap(arr[j],arr[j+1]);
        }
        }
    }
}
int main(){
    int arr[10]={12,54,86,85,11,66,74,21,99,55};
int n=10;
bubblesort(arr,10);
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
}