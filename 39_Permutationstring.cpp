#include<bits/stdc++.h>
using namespace std;

void solve(vector<int> nums,int index,vector<vector<int>> ans){
    //basecase
    if(index>=nums.size()){
        ans.push_back(nums);
        return ;
    }

    for(int j=index;j<nums.size();j++){
        swap(nums[index],nums[j]);
        solve(nums,index+1,ans);
        swap(nums[index],nums[j]);

    }
}


vector<vector<int>> permutation(vector<int>& nums){
    vector<vector<int>> ans;
    int index =0;
    solve(nums,index,ans);
    return ans;
}

int main(){
vector<int> nums(3);


for(int i=0;i<3;i++){
cin>>nums[i];
}
for(int i=0;i<3;i++){
cout<<nums[i];
}
cout<<endl;

vector<vector<int>> ans(10);
ans = permutation(nums);

for (int i = 0; i < nums.size(); i++) 
{ 
   for (int j = 0; j < nums.size(); j++) 
   { 
      cout << ans[i][j] << " "; 
   } 
     
   // Newline for new row 
   cout << endl; 
}
    return 0;
}