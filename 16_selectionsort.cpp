#include<iostream>
using namespace std;
void sort(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                swap(arr[j],arr[i]);
            }
        }
    }
}
int main(){
int arr[10]={12,54,86,85,11,66,74,21,55,99};
int n=10;
sort(arr,10);
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}

}