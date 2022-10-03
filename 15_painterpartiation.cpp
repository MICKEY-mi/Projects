#include<iostream>
using namespace std;
bool Ispossible(int arr[],int n,int m,int mid){
    int paintercount=1;
    int time =0;
    for(int i=0;i<n;i++){
        if(time+arr[i]<=mid){
            time+=arr[i];
        }
        else{
            paintercount++;
            if(paintercount>m ||arr[i]>mid){
                return false;
            }
            time = arr[i];
        }
    }
    return true;
}
int painter(int arr[],int n,int m){
    int start = 0 ;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int end = sum;
    int mid = (start+end)/2;
    int ans;
    while(start<=end){
        if(Ispossible(arr,n,m,mid)){
            ans = mid;
            end = mid-1;
        }
        else
        start = mid+1;
        mid = (start+end)/2;
    }
    return ans;
}
int main(){
int m;
cout<<"Enter the number of painters : "<<endl;
cin>>m;
int arr[10]={2,5,4,7,9,4,1,7,9,6};
int ans = painter(arr,10,m);
cout<<"min time is : "<<ans;

    return 0;
}