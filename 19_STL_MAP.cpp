#include<iostream>
#include<map>
using namespace std;
int main(){

map <int,string> m;
m[1]="babbar";
m[22]="love";
m[13]="kumar";
for(auto i:m){
    cout<<i.first<<" "<<i.second<<endl;
}
m.insert({5,"bheem"});
cout<<endl;

for(auto i:m){
    cout<<i.first<<" "<<i.second<<endl;
}
cout<<m.size()<<endl;
cout<<m.count(13)<<endl;

auto it = m.find(5);
for(auto i=it;i!=m.end();i++){
cout<<(*i).first<<endl;
}

    return 0;
}