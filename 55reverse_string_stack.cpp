#include<bits/stdc++.h>
using namespace std;

void reverse(string &s,int n){
    stack<char> st;
    for(int i=0;i<n;i++){
        st.push(s[i]);
    }
    for(int i=0;i<n;i++){
        s[i]=st.top();
        st.pop();
    }
}

int main(){
    string s = "shivam";
    reverse(s,s.length());
    cout<<s;
}
