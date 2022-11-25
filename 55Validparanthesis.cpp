#include<bits/stdc++.h>
using namespace std;

bool isvalidparanthesis(string str){
    stack<char> s;
    for(int i=0;i<str.length();i++){
        char ch = str[i];

        if(ch=='(' || ch=='{' || ch=='['){
            s.push(ch);
        }

        else{
            if(!s.empty()){
                char top = s.top();
                if( (ch==')' && top =='(' )|| (ch==']' && top =='[' )||( ch=='}' && top =='{' )){
                    s.pop();
                }
                else{
                    return false;
                }
            }
            else{
                return false;
            }
        }
    }
    if(s.empty())
        return true;
    else
    return false;
}

int main(){
    string str;
    cin>>str;
    cout<<str;
    cout<<str.length()<<endl;
    int ans  = isvalidparanthesis(str);
    if(ans ==1){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
    
    
}