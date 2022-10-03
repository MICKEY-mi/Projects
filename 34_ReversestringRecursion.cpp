#include<bits/stdc++.h>
using namespace std;

string reverse(string str,int s,int e){
    string ans = str;
    if(s>e){
        return ans;
    }
    swap(str[s],str[e]);
    s++;
    e--;
    ans = reverse(str,s,e);
return ans;
}

int main(){

string str = "abcde";
string ans;
ans = reverse(str,0,str.length()-1);
cout<<ans;

    return 0;
}