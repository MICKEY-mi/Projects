#include<bits/stdc++.h>
using namespace std;
bool binary(vector<vector<int>> v,int key){
    int r = v.size();
    int c = v[0].size();
    int s =0;
    int e = (r*c)-1;
    int mid = (s+e)/2;
    while(s<=e){
        int element = v[mid/c][mid%c];
        if(element == key){
            return 1;
        }
        if(element<key){
            s=mid+1;
        }
        else
        e=mid-1;

        mid = (s+e)/2;
    }
    return 0;
}

int main(){

vector<vector<int>> v={{1,2,3},
                       {4,5,6}};

int key;
cout<<endl<<"Enter the key : ";
cin>>key;
cout<<endl;
if(binary(v,key)){
    cout<<"key found";
}
else
cout<<"key not found";

    return 0;
}