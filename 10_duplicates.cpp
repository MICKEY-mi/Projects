#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int ans=0;
    int arr[5]={1,2,3,2,4};
    for(int i=0;i<5;i++){
        ans=ans^arr[i];
    }
    cout<<ans<<endl;
    for(int i=0;i<5;i++){
        ans=ans^i;
    }
    cout<<ans;
}