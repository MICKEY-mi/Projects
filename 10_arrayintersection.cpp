#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int count=0;
    int arr1[6]={1,2,3,9,5,6};
    int arr2[3]={0,8,3};
    for(int i=0;i<6;i++){
        for(int j=0;j<3;j++){
            if(arr1[i]==arr2[j]){
            cout<<arr1[i]<<endl;
            count++;
            }
        }
    }
    if(count==0)
    cout<<-1<<endl;
}