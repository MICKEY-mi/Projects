#include<iostream>
#include<list>
using namespace std;
int main(){

list <int> l(5,100);
for(int i:l){
    cout<<i<<" ";
}
cout<<endl;

l.push_front(1);
l.pop_back();
for(int i:l){
    cout<<i<<" ";
}

cout<<endl;
cout<<l.front();
cout<<endl
<<l.back()<<endl
<<l.size()<<endl;

    return 0;
}