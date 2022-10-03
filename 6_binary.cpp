#include<iostream>
#include<math.h>
using namespace std;

int dec_bin(int n){
int i =0,ans=0;
while(n!=0){
    int digit = n%10;
    if(digit ==1){
        ans = ans + pow(2,i);
    }
    n=n/10;
    i++;
}
return ans;
}

int bin_dec(int n){
int i=0,ans=0;
while(n!=0){
    int bit = n&1;
    ans = (bit * pow(10,i))+ans;
    n=n>>1;
    i++;

}
return ans;
}

int main(){
//binary to decimal
int n;
cout<<"Enter the binary : "<<endl;
cin>>n;
cout<<dec_bin(n)<<endl;

//decimal to binary
int num;
cout<<"Enter the decimal :"<<endl;
cin>>num;
cout<<bin_dec(num)<<endl;
}