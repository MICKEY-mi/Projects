#include<iostream>
#include<math.h>
using namespace std;
int factorial(int n){
    int i=1,fact=1;
    while(i!=(n+1)){
        fact=fact*i;
        i++;
    }
    return fact;
}
int ncr(int n,int r){
    int ans = (factorial(n))/((factorial(r))*factorial(n-r));
    return ans;
}

int main(){
    int n,r;
cout<<"Enter n"<<endl;
cin>>n;
cout<<"Enter r"<<endl;
cin>>r;
//cout<<factorial(n)<<endl;
cout<<ncr(n,r)<<endl;
}