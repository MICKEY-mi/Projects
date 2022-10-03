#include<iostream>
#include<math.h>

using namespace std;
int main(){
int n1,n2;
cout<<"Enter the first number : "<<endl;
cin>>n1;
cout<<"Enter the second number : "<<endl;
cin>>n2;
char op;
cout<<"Enter the operation : "<<endl;
cin>>op;

switch(op){
    case '+':
    cout<<n1+n2<<endl;
    break;
    case '-':
    cout<<n1-n2<<endl;
    break;
    case '*':
    cout<<n1*n2<<endl;
    break;
    case '/':
    cout<<n1/n2<<endl;
    break;
    case '%':
    cout<<n1%n2<<endl;
    break;
    default : 
    cout<<"Enter a valid operation."<<endl;
}

}