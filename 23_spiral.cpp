#include<bits/stdc++.h>
using namespace std;
vector<int> spiral(vector<vector<int>> v,int r,int c){
    
}


int main(){
vector<vector<int>> v(12);
int r=3,c=4;

cout<<"Enter the elements : "<<endl;
int temp=0;
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        cin>>temp;
        v[i].push_back(temp);
    }
}
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
       cout<<v[i].at(j)<<" ";
    }
    cout<<endl;
}


    return 0;
}