#include<iostream>
#include<deque>
using namespace std;
int main(){

deque <int> d;
d.push_back(4);
d.push_front(3);
d.push_front(2);
d.push_front(1);
cout<<d.size()<<endl;
cout<<d.at(1)<<endl;
cout<<d.front()<<endl
<<d.back()<<endl;
    return 0;
}