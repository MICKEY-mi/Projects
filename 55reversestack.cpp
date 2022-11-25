#include<bits/stdc++.h>
using namespace std;

void solve(stack<int> &s,int element){
    if(s.empty()){
        s.push(element);
        return;
    }
    int num = s.top();
    s.pop();

    solve(s,element);
    s.push(num);
}

stack<int> insertatbottom(stack<int> &s,int element){
    solve(s,element);
    return s;
}

stack<int> reversestack(stack<int> &s){
    if(s.empty()){
        return s;
    }
    int num = s.top();
    s.pop();
    reversestack(s);
    insertatbottom(s,num); 

    return s;
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
    s.push(5);
    s.push(7);
    s.push(9);
    s.push(4);
    print(s);
    cout<<endl;
    print(reversestack(s));
}