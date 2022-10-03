#include<iostream>
#include<math.h>
using namespace std;

void swapalternate(int arr[],int n){
    for(int i=0;i<n;i+=2){
        swap(arr[i],arr[i+1]);
    }
}
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,0};
    swapalternate(arr,9);
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
}