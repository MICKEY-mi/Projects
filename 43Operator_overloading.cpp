#include<bits/stdc++.h>
using namespace std;

class student {
    public:
    int a;
    int b;

    
   

    void operator+ (student &obj){
        int val1 = this-> a;
        int val2 = this-> b;
        cout<<"Output is "<<val1-val2<<endl;

    }
    void operator() (){
        cout<<"m bracket hu"<<endl;
    }
};
int main(){
    student s1,s2;
    s1.a = 4;
    s2.a = 7;
    s1+s2;
    
    s1();

}