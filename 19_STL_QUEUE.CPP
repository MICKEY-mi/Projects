#include<iostream>
#include<queue>
using namespace std;
int main(){

queue <int> s;
s.push(1);
s.push(2);
s.push(3);
s.push(4);

cout<<s.size()<<endl
<<s.front()<<endl
<<s.empty()<<endl;

s.pop();
cout<<s.front()<<endl;
cout<<s.back()<<endl;
    return 0;
}