//will complete after sorting array

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

bool Ispossible(int arr[],int n,int m,int mid){
    int cowcount =1;
    int dist = 0;
     for (int i = 0; i < n; i++)
    {
        if (dist + arr[i] <= mid)
        {
            dist += arr[i];
        }
        else
        {
            cowcount++;
            if (cowcount > m || arr[i] > mid)
            {
                return false;
            }
            dist = arr[i];
        }
    }
    return true;
    
}
int cows(int arr[],int n,int m){
    int start = 0;
    int sum = 0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int ans = -1;
    int end = sum;
    int mid = (start+end)/2;
    while(start<=end){
        if(Ispossible(arr,n,m,mid)){
            ans = mid;
            end = mid -1;
        }
        else
        start = mid+1;
        mid = (start+end)/2;
    }
    return ans;
}




int main(){
int m;
cout<<"Enter the number of cows : "<<endl;
cin>>m;
int arr[10] = {11,2,3,4,5,6,7,8,9,10};
int ans = cows(arr,10,m);
cout<<ans;

    return 0;
}