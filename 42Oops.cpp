#include<bits/stdc++.h>
using namespace std;
class student {
    public:
    student(){
        cout<<"This is constructor."<<endl;
    }

    public:
    int roll;
    string st;
    int marks;


};
int main(){
student s;

s.roll = 1;
s.marks = 22;
cout<<s.roll<<endl;
cout<<s.marks<<endl;
s.st = "abc";
cout<<s.st;


    return 0;
}