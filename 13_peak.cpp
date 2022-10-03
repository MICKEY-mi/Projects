#include<iostream>
using namespace std;
int peak(int arr[],int n){
    int start =0;
    int end = n-1;
    int mid = (start+end)/2;
    while(start<end){
        if(arr[mid]<arr[mid+1]){
            start = mid+1;
        }
        else{
            end=mid;
        }
        mid=(start+end)/2;
    }
    return start;
}
int main(){
int n=10;
int arr[n]={0,1,2,3,6,4,3,2,1,0};
int ans = peak(arr,n);
cout<<arr[ans]<<endl;

}