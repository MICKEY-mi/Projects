#include <bits/stdc++.h>
using namespace std;
bool redundent(string &s){
    stack<int> st;
    for(int i=0;i<s.length();i++){
            char ch= s[i];

            if(ch =='(' ||ch =='+' ||ch =='-' ||ch =='*' ||ch =='/' ){
                st.push(ch);
            }
            else{
                if(ch==')'){
                    bool isredundent = true;
                    while(st.top()!='('){
                            char top = st.top();
                            if(top =='+' ||top =='-' ||top =='*' ||top =='/'){
                                isredundent = false;
                            }
                            st.pop();
                    }
                    if(isredundent==true){
                        return true;
                    }
                    st.pop();
                }
            }
    }
    return false;
}

int main(){
    string s;
    cout<<"Enter the expression : "; 
    cin>>s;
    cout<<redundent(s);
}
