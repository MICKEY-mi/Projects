#include<bits/stdc++.h>
using namespace std;

vector<int> nextsmallest(vector<int> &arr , int n){

    stack <int> s;
    s.push(-1);
    vector<int> ans(n);

    for(int i =n-1;i>=0;i--){
        int curr = arr[i];
        while(s.top()>=curr){
            s.pop();
        }
        ans[i] = s.top();
        s.push(curr);
    }
    return ans;

}

int main(){
    int n = 6;
    vector<int> arr = {1,2,3,4,2,3};
    vector<int> ans = nextsmallest(arr,n);
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}