//#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int partition(int arr[],int s,int e){
    int pivot = arr[s];
    int count=0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivot){
            count++;
        }
    }
    int pivotindex = s+count;
    swap(arr[pivotindex],arr[s]);
    
      int i=s;
      int j=e;
      while(i<pivotindex && j>pivotindex){
        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }

        if(i<pivotindex && j>pivotindex){
            swap(arr[i++],arr[j--]);
        }
      }

return pivotindex;

}

void quicksort(int arr[],int s,int e){
    if(s>=e){
        return ;
    }
   
   int p = partition(arr,s,e);

   quicksort(arr,s,p-1);
   quicksort(arr,p+1,e);
    
}

int main(){
    int arr[5] = {5,7,3,9,1};
    cout<<"abc"<<endl;
    int n = 5;
    quicksort(arr,0,n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;
    cout<<"end";

    return 0;
}