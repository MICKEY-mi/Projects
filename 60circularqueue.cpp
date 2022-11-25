#include<bits/stdc++.h>
#include<iostream>
using namespace std;


class circularqueue{
    public:

    int *arr;
    int front;
    int rear;
    int size;


public:
circularqueue(int n){
    size = n;
    arr = new int[size];
    front  =  -1;
    rear = -1;
}

bool enqueue(int value){
    if( (rear==(front-1)%(size-1)) || (front == 0 && rear==size-1) ){
        cout<<"Queue is full"<<endl;
        return false;
    }
    else if(front==-1){
        front = rear = 0;

    }
    else if(rear == size-1 && front!=0){
        rear = 0;
    }
    else{
        rear++;
    }
    arr[rear]= value;
    return true;

}

void dequeue(){
    if(front==-1){
        cout<<"queue is empty"<<endl;
    }
    int ans = arr[front];
    arr[front]=-1;
    if(front == rear){
        front = rear = -1;
    }
    else if(front == size -1){
        front = 0;
    }
    else{
        front++;
    }
}

void print(){
    int f=front;
    while(f<=rear){
        cout<<arr[front]<<" ";
        f++;
    }
    cout<<endl;
}

};



int main(){

int n=3;

circularqueue q1(n);
q1.enqueue(5);
q1.print();
q1.enqueue(4);
q1.print();
q1.dequeue();
q1.print();
    return 0;
}