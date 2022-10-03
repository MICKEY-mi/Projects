#include<iostream>
#include<queue>
using namespace std;
int main(){

priority_queue <int> maxi;
maxi.push(1);
maxi.push(5);
maxi.push(3);
maxi.push(0);

cout<<maxi.size()<<endl
<<maxi.top()<<endl
<<maxi.empty()<<endl;
int n = maxi.size();
for(int i=0;i<n;i++){
    cout<<maxi.top()<<" ";
    maxi.pop();
}
cout<<endl;
maxi.pop();
cout<<maxi.top()<<endl;

    return 0;
}