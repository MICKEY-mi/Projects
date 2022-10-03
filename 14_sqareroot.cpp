#include<iostream>
using namespace std;
long long int root(int num){
    int s=0;
    int e = num;
    long long int ans=-1;
    long long int mid =(s+e)/2;
    while(s<=e){
        if((mid*mid)==num)
        return mid;
        else if((mid*mid)>num)
        e=mid-1;
        else{
            ans = mid;
        s=mid+1;
        
        }
        mid = (s+e)/2;
    } 
    return ans;
}
double moreprecision(int num,int precison,int intsol){
    double factor =1;
    double ans = intsol;
    for(int i=0;i<precison;i++){
        factor = factor/10;
        for(double j=ans;j*j<num;j=j+factor){
            ans=j;
        }
    }
    return ans;
}
int main(){
int num;
cin>>num;
int intsol = root(num);
double ans = moreprecision(num,10,intsol);
cout<<ans<<endl;
return 0;
}
    
