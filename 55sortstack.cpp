#include<bits/stdc++.h>
using namespace std;

void sortedinsert(stack<int> &s,int num){
    if(s.empty() || (!s.empty() && s.top()<num)){
        s.push(num);
        return;
    }
    int n = s.top();
    s.pop();
    sortedinsert(s,num);
    s.push(n);
}


void sortstack(stack<int> &s){
    if(s.empty()){
        return;
    }

    int num = s.top();
    s.pop();
    sortstack(s);
    sortedinsert(s,num);
}


void print(stack<int> s){
    stack<int> s1 = s;
    for(int i=0;i<s.size();i++){
        cout<<s1.top()<<" ";
        s1.pop();
    }
}
int main(){
    stack<int> s;
    s.push(3);
    s.push(-5);
    s.push(7);
    s.push(9);
    s.push(4);
    print(s);
    cout<<endl;
    (sortstack(s));
    print(s);
}