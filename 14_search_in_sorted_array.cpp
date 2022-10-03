#include<iostream>
using namespace std;
int pivot(int arr[],int n){
    int s=0;
    int e=n-1;
    int m=(s+e)/2;
    while(s<e){
        if(arr[m]>=arr[0])
        s=m+1;
        else
        e=m;
        m=(s+e)/2;
    }
    return s;
}
int bin_search(int arr[],int s,int e,int key){
    int mid = (s+e)/2;
    while(s<=e){
        if(key==arr[mid]){
            return mid;
        }
        else if(key>arr[mid]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=(s+e)/2;
    }
    return -1;
}

int position(int arr[],int n,int key){
    int p = pivot(arr,n);
    if(key>=arr[p]&&key<=arr[n-1]){
        return bin_search(arr,p,n-1,key);
    }
    else{
        return bin_search(arr,0,p-1,key);
    }
}
int main(){
    int key;
    cout<<"Enter the key : "<<endl;
    cin>>key;
int arr[5]={7,9,1,2,3};
int ans=position(arr,5,key);
cout<<ans;
}