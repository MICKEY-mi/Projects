#include<iostream>
#include<math.h>
using namespace std;
void revarray(int arr[],int n){
    int temp;
    for(int i=0;i<n/2;i++){
        swap(arr[i],arr[n-i-1]);
    }
}
int main(){
int arr[10]={1,2,3,4,5,6,7,8,9,10};
revarray(arr,10);
for(int i=0;i<10;i++){
    cout<<arr[i] <<endl;
}

}