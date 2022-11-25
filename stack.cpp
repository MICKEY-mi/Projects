#include<iostream>
using namespace std;

class stack{
    int data;
    int size;
    int* arr;
    int top = -1;
    public:

    stack(int size){
        this->data = -1;
        this->size = size;
        this -> arr = new int[this->size];
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

};

int main(){
    stack s(5);
    s.push(1);
    s.push(12);
    s.push(11);
    s.push(16);
    s.push(14);
    s.push(18);
    s.push(19);
    s.print();
    s.pop();
    s.print();



}