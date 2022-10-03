#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
   if(a!=0 && b!=0){
    if(a>b){
        a=a-b;
        gcd(a,b);
    }
    else if(a<b){
        b=b-a;
    gcd(a,b);
    }

    else{
        return a;
    }
   }
   else
   return 0;
}

int main(){
    int a , b;
    cout<<"Enter a and b: ";
    cin>>a>>b;
   cout<<"GCD is : "<<gcd(a,b);
}