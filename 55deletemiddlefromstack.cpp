//do by inbuilt stack for more correcctness;


#include<iostream>
using namespace std;

class stack{
    int size;
    int* arr;
    int top = -1;
    public:

    stack(int size){
        this->size = size;
        arr = new int[size];
    }

    void push(int element){
        if(top<size-1){
            top++;
            arr[top]=element;
        }
        else{
            cout<<"Stack overflow!"<<endl;
        }
    }

    void pop(){
        top = size-1;
        if(top>=0){
            arr[top]=-1;
            top--;
        }
        else{
            cout<<"Stack underflow"<<endl;
        }
    }

    void print(){
    int i=0;
    for(int i=0;i<=top;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    }

    int topelement(){
        if(top>=0)
        return arr[top];
        else
        return -1;
        }

};

void solve(stack s,int count,int size){
    if(count==size){
        s.pop();
        return;
    }
    int num = s.topelement();
    s.pop();

    solve(s,count+1, size);
    s.push(num);
}

void deletemiddleelement(stack s,int size){
        int count = 0;
        solve(s,count,size);
        s.print();
}

int main(){
    stack s(5);
    s.push(1);
    s.push(12);
    s.push(11);
    s.push(16);
    s.push(14);
    s.push(18);
    s.print();
  cout<<s.topelement();    
    cout<<endl;

    int size = 5;
    deletemiddleelement(s,size);
    s.print();



}