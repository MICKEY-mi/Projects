
#include<iostream>
#include<vector>
using namespace std;
vector<int> wave(vector<vector<int>> v,int cols,int rows){
    vector<int> ans;
    for(int i=0;i<cols;i++){
        if(i&1){
            for(int j=rows-1;j>=0;j--){
                ans.push_back(v[j][i]);
            }
        }
        else{
            for(int j=0;j<rows;j++){
                ans.push_back(v[j][i]);
            }
        }
    }
    return ans;
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

vector<int>ans = wave(v,c,r);
for(int i=0;i<r*c;i++){
        cout<<ans[i]<<" ";
}


std :: cout<<endl<<"end";


    return 0;
}