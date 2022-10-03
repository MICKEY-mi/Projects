#include<bits/stdc++.h>
using namespace std;

int step(int n){
    if(n<0){
        return 0;
    }
    if(n==0){
        return 1;
    }
    int ans;
    ans = step(n-1)+step(n-2);
    return ans;
}

int main(){
int n;
cout<<"Enter N :";
cin>>n;
cout<<endl;
cout<<step(n);

    return 0;
}