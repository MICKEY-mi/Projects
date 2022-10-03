#include<iostream>
#include<math.h>
using namespace std;
int firstocc(int arr[],int n,int key){
    int start =0;
    int end = n-1;
    int ans;
    int mid = (start+end)/2;
    while(start<=end){
        if(key==arr[mid]){
        ans = mid;
        end=mid-1;
        }
        else if(key<arr[mid])
        end = mid-1;
        else
        start = mid+1;
        mid=(start+end)/2;
    }
    return ans;
}
int lastocc(int arr[],int n,int key){
    int start =0;
    int end = n-1;
    int ans;
    int mid = (start+end)/2;
    while(start<=end){
        if(key==arr[mid]){
        ans = mid;
        start=mid+1;
        }
        else if(key<arr[mid])
        end = mid-1;
        else
        start = mid+1;
        mid=(start+end)/2;
    }
    return ans;
}
int main(){
int key;
cout<<"Enter the key: ";
cin>>key;
int arr[10]={0,1,2,3,3,3,4,5,5,6};
int index1 = firstocc(arr,10,key);
int index2 = lastocc(arr,10,key);
cout<<index1<<" and "<<index2<<endl;
}