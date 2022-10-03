#include<bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
        node* next;
//constructor
node(int a){
    this->data = a;
    this -> next = NULL;
}

};


node* kreverse(node* head ,int k){
    if(head==NULL){
        return NULL;
    }
    node* curr = head;
    node* prev = NULL;
    node* next = NULL;
    int count = 0;

    while(curr!=NULL && count<k){
        next = curr-> next;
        curr-> next = prev;
        prev = curr;
        curr = next;
        count++;
    }

    if(next!=NULL){
        head-> next = kreverse(next,k);
    }

    return prev;
}

//to add elements from start
void topointhead(node* &head,int d){
    node* temp = new node(d);
    temp -> next = head;
    head = temp;
    
}

//to print list 
void printnode(node* &head){
    node* temp = head;
    while(temp != NULL){
        cout<< temp-> data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}

void printreversed(node* head){
    while(head!=NULL){
        printnode(head);
        head = head-> next;
    }
}


int main(){
    node* node1 = new node(10);
    node* head = node1;
    
    int d;
    for(int i=0;i<5;i++){
        cout<<"Enter next element : ";
        cin>>d;
        topointhead(head,d);
    }
    /* topointhead(head,11);
    topointhead(head,12);
    topointhead(head,13);*/
    printnode(head);


    node* prev = kreverse(head,2);
    printnode(prev);
    
}