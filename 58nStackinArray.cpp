#include<bits/stdc++.h>
using namespace std;
class nstack{
        int *arr;
        int *top;
        int *next;
        int n,s,freespot;
    
    public: 

        nstack(int n , int s){
                this->n = n;
                this->s = s;
                 
                arr = new int [s];
                top = new int [n];
                next = new int [s];

            for(int i=0;i<n;i++){
                top[i]=-1;
            }

            for(int i=0;i<s;i++){
                next[i]=i+1;
            }

            next[s-1]=-1;
            
            freespot = 0;
        }
    bool pushs(int x, int m){
        if(freespot == -1){
            return false;
        }

        int index = freespot;

        freespot = next[index];

        arr[index] = x;

        next[index] = top[m-1];

        top[m-1] = index;
        return true;
    }

    bool pops(int m){
        
        //check underflow
        if(top[m-1]==-1){
            return -1;
        }
        int index= top[m-1];
        top[m-1]=next[index];

        next[index]= freespot;

        freespot= index;
        return arr[index];


    }

};

int main(){
    int n,s,q;
cin>>n>>s>>q;




    return 0;
}