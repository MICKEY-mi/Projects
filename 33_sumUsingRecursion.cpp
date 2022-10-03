#include<bits/stdc++.h>
using namespace std;
int sum(int arr[],int n){
    int size = n;
    int ans=arr[0];
    if(size==0){
        return ans;   
    }
    else{
        ans = ans+sum(arr+1,size-1);
    }
    return ans;
    
}



int main(){
    int n=10;
    int arr[n];
    cout<<"Enter the elements of array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans = sum(arr,n);
    cout<<ans;
    return 0;
}