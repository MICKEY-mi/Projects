#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int> v;
cout<<v.capacity()<<endl;

v.push_back(1);
v.push_back(2);
v.push_back(3);

cout<<v.capacity()<<endl
<<v.size()<<endl
<<v.at(2)<<endl
<<v.front()<<endl
<<v.back()<<endl;

v.pop_back();

cout<<v.capacity()<<endl
<<v.size()<<endl;

v.clear();
cout<<v.size()<<endl;
cout<<endl;

vector<int> a(5,1);
cout<<a.size()<<endl
<<a.capacity()<<endl;
cout<<endl;

//printing all element of vector
for(int i:a){
    cout<<i<<" ";
}
cout<<endl;

    return 0;
}