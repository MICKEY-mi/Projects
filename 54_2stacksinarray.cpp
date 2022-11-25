#include<bits/stdc++.h>
using namespace std;

class twostack{
   
int *arr;
int size;
int top1;
int top2;
public:
    twostack(int s){
        this->size = s;
        top1=-1;
        top2 =s;
        arr = new int[s];
    }


void push1(int d){
    //atlest 1 empty space
    if((top2 - top1) >1){
        top1++;
        arr[top1]=d;
    }
    else{
        cout<<"stack overflow"<<endl;
        
    }
}
int pop1(){
    if(top1>=0){
        int ans = arr[top1];
        top1--;
        return ans;
    }
    else{
        cout<<"stack underflow"<<endl;
        return -1;
    }
}

void push2(int d){
     //atlest 1 empty space
    if((top2-top1) >1){
        top2--;
        arr[top2]=d;
    }
    else{
        cout<<"stack overflow"<<endl;
    }
}
int pop2(){
     if(top2<size){
        int ans = arr[top2];
        top2++;
        return ans;
    }
    else{
        cout<<"stack underflow"<<endl;
        return -1;
    }
}

void print(){
    int i=0;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

};


int main(){
    twostack a(6);
    a.push1(1);
    a.push1(2);
    a.push1(3);
    a.push2(4);
    a.push2(5);
    a.push2(6);
    a.push2(7);
    a.print();

    cout<<a.pop2()<<endl;
    cout<<a.pop2()<<endl;
    cout<<a.pop2()<<endl;
    a.print();
    
    a.push1(11);
    a.push1(22);
    a.push1(67);
    a.push1(45);
    a.print();
    a.pop2();
    
}