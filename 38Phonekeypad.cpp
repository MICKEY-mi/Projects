#include<bits/stdc++.h>
using namespace std;

void solve(string digit,string output, int index,vector<string>& ans,string mapping[]){
    if(index>=digit.length()){
        ans.push_back(output);
        return;
    }

    int number = digit[index] -'0';
    string value = mapping[number];

    for(int i=0;i<value.length();i++){
        output.push_back(value[i]);
        solve(digit,output,index+1,ans,mapping);
        output.pop_back();
    }
}

vector<string> lettercombination(string digit){
    vector<string> ans;
    string output;
    int index =0;
    string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    solve(digit,output,index,ans,mapping);
    return ans;
}

int main(){
    string str;
    cin>>str;
    cout<<str;
cout<<endl;

vector<string> ans;
ans = lettercombination(str);
int n = ans.size();
for(int i=0;i<n;i++){
    cout<<ans[i]<<endl;
}


return 0;
}