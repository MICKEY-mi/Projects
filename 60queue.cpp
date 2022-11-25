#include<bits/stdc++.h>
using namespace std;
class queueu{
    int *arr;
    int front;
    int rear;
    int n;
    public:
    queueu(int n){
        this->n = n;
        arr = new int[n];
        front = 0;
        rear = 0;
    }

    void push(int value){
        if(rear==n){
            cout<<"queue is full"<<endl;
        }
        else{
            arr[rear]=value;
            rear++;
        }
    }

    void pop(){
        if(front == rear){
            cout<<"queue is empty"<<endl;
        }
        else{
            arr[front]= -1;
            front++;
            if(front==rear){
                front = 0;
                rear =0;
            }
        }
    }

    int frontelement(){
        if(front==rear){
            cout<<"queue is empty"<<endl;
            return -1;
        }
        else{
            return arr[front];
        }
    }

    bool isempty(){
        if(front==rear){
            return true;
        }
        else{
            return false;
        }
    }

    void print(){
        for(int i=front;i<rear;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

};

int main(){
        queueu q1(5);
        q1.push(5);
        q1.push(4);
        q1.push(3);
        q1.push(2);
        q1.push(1);
        q1.print();

        q1.pop();
        q1.pop();
        q1.print();

        q1.push(10);
        

return 0;
}
