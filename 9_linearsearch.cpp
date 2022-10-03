#include<iostream>
using namespace std;
bool ls(int arr[],int n,int key){
    for(int i=0;i<n;i++){
    if(key==arr[i])
    return 1; 
    }
    return 0;
}
int main(){
    int key;
    cout<<"Enter the key : "<<endl;
    cin>>key;
    int arr[10]= {1,5,3,6,8,2,41,74,87,77};
    bool ans = ls(arr,10,key);
    if(ans)
    cout<<"key is present"<<endl;
    else
    cout<<"key is absent"<<endl;
}