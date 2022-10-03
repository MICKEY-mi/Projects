#include<bits/stdc++.h>
using namespace std;

bool Ispossible(vector<vector<int>> v,int x,int y,vector<vector<int>> relative){
    if((x>=0 && y>=0)  && v[x][y]==1 && relative[x][y]==0){
        return true;
    }
    else
    return false;
}

vector<string> solve(vector<vector<int>> v, int x,int y,int ri,int ci,vector<vector<int>> relative,vector<string>& ans){
    if(x==ri && y==ci){
        return ans;
    }

    //up
    if(Ispossible(v,x,y-1,relative)){
        ans.push_back("U");
        x=x;
        y=y-1;
        relative[x][y] = 1 ;
        solve(v,x,y,ri,ci,relative,ans);
    }

    //down
    if(Ispossible(v,x,y+1,relative)){
        ans.push_back("D");
        x=x;
        y=y+1;
        relative[x][y] = 1 ;
        solve(v,x,y,ri,ci,relative,ans);
    }

    //left
    if(Ispossible(v,x-1,y,relative)){
        ans.push_back("L");
        x=x-1;
        y=y;
        relative[x][y] = 1 ;
        solve(v,x,y,ri,ci,relative,ans);
    }

    //up
    if(Ispossible(v,x+1,y,relative)){
        ans.push_back("R");
        x=x+1;
        y=y;
        relative[x][y] = 1 ;
        solve(v,x,y,ri,ci,relative,ans);
    }
    return ans;
}

vector<string> steps(vector<vector<int>> v,int x,int y, int ri,int ci){
        vector<vector<int>> relative = v;
        for(int i=0;i<=ri;i++){
            for(int j=0;j<=ci;j++){
                relative[i][j]=0;
            }
        }
        vector<string> ans;
        solve(v, x, y, ri, ci, relative,ans);
        return ans;

}



int main(){

vector<vector<int>> v= {
    {1,0,0,0},
    {1,1,0,0},
    {1,1,0,0},
    {0,1,1,1}
};
int x=0,y=0;
int c=4;
int r=4;
int ci=c-1;
int ri = r-1;

for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        cout<<v[i][j]<<" ";
    }
    cout<<endl;
}
cout<<endl;

vector<string> ans = steps(v, x, y,  ri,ci);
for(int i=0;i<ans.size();i++){
    cout<<ans.at(i);
}



    return 0;
}