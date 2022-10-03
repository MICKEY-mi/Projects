#include<bits/stdc++.h>
using namespace std;

bool search(int arr[],int n,int k){
    int size = n;
    bool ans;
    if(size==0){
        return false;
    }
    if(arr[0]==k){
        return true;
    }
    else{
        bool rp = search(arr+1,size-1,k);
        return rp;
    }

}


int main(){
int arr[5]={3,5,1,2,6};
int k;
cout<<"Enter the key : ";
cin>>k;
bool ans = search(arr,5,k);

if(ans){
    cout<<"Key found";
}
else
cout<<"Key not found";

    return 0;
}