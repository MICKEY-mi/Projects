#include<iostream>
#include<array>


using namespace std;
int main(){
//creating an array
array<int,4> a = {1,2,3,4};
cout
<<a.size()<<endl
<<a.at(2)<<endl
<<a.empty()<<endl
<<a.front()<<endl
<<a.back()<<endl;
    return 0;
}