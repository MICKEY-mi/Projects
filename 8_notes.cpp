#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int num;
    cout<<"Enter the amount : "<<endl;
    cin>>num;
     int i=1;
    switch(1){
        case 1 :
            cout<<num/100<<" of 100's notes."<<endl;
            num = num%100;
        case 2 : 
            cout<<num/20<<" of 20's notes."<<endl;
            num = num%20;
        case 3:
            cout<<num<<" of 1's notes."<<endl;        
    }

    


}