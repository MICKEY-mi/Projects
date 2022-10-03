#include<iostream>
#include<math.h>
using namespace std;
int reverse_num(int n){
    int ans=0;
    while(n!=0){
    int digit = n%10;
    ans = (ans*10)+digit;
    n=n/10;
    }
    if(ans> (INT_MAX/10) || ans<(INT_MIN/10)){      //INT_MAX GIVE MAXIMUM POSSIBLE VALUE OF INT .
        return 0;
    }
else
    return ans;
}

int complement (int n){
    int m=n;
    int mask=0;
    if(n==0){
        return 1;
    }
    while(m!=0){
        mask = (mask<<1)|1;
        m = m>>1;
        
    }
    int ans = (~n) & mask;
    return ans;
}

bool pow2(int n){
    int ans;
   // if(n==0){
     //   return true;
    //}
    int a=0;
    for(int i=0;i<=(INT_MAX)/2;i++){
        
        if(n==a)
            return true;
    
        a=pow(2,i);
    }        
    return false;
}


int main(){
    int n,num,num2;
    cin>>n;
    cout<<reverse_num(n)<<endl;
    cout<<"Enter the number to compliment :"<<endl;
    cin>>num;
    cout<<complement(num)<<endl;
    cout<<"Enter num2:"<<endl;
    cin>>num2;
    cout<<pow2(num2)<<endl;
}