#include<iostream>
using namespace std;
int main(){
    int sum;
    cin>>sum;
    int arr[10]={0,1,2,3,4,5,6,7,8,9};
    for(int i=0;i<10;i++){
        for(int j=i+1;j<10;j++){
            if(arr[i]==sum-arr[j])
            cout<<arr[i]<<","<<arr[j]<<endl;
        }
    }
}