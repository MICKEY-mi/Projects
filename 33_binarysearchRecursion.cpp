#include<bits/stdc++.h>
using namespace std;

bool search(int arr[],int s,int e,int k){
   if(s>e){
    return false;
   }
   int mid = (s+e)/2;
   if(arr[mid]==k){
        return true;
   }
if(arr[mid]<k){
    return search(arr,mid+1,e,k);
}
else{
    return search(arr,s,mid-1,k);
}

}


int main(){
int arr[5]={1,3,4,6,8};
int k;
cout<<"Enter the key : ";
cin>>k;
bool ans = search(arr,0,4,k);

if(ans){
    cout<<"Key found";
}
else
cout<<"Key not found";

    return 0;
}