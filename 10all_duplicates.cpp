#include<iostream>
#include<math.h>
using namespace std;
int main(){

    int arr[10]={1,2,6,2,8,3,1,7,7,5};
    for(int i=0;i<10;i++){
        for(int j=i+1;j<10;j++){
            if(arr[i]==arr[j])
            cout<<arr[i]<<endl;
        }
    }
}