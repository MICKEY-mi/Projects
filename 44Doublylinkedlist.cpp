#include<bits/stdc++.h>
using namespace std;

class node {
    public:
     int data;
     node* prev;
     node* next;

node(int d){
    this -> data = d;
    this-> prev = NULL;
    this ->next = NULL;
}
~node(){
    int val = this-> data;
    if(next != NULL){
        delete next;
        next = NULL;
    }
    cout<<"memory free with node of data : "<<val<<endl;
}

};


void insertathead(node* &head , int d){
    
    if(head==NULL){
        node* temp = new node(d);    
        head = temp;
    }
    else{
        node* temp = new node(d);
    temp->next = head;
    head->prev = temp;
    head= temp;
    }
}

void insertattail(node* &tail , int d){
    if(tail==NULL){
        node* temp = new node(d);    
        tail = temp;
    }
    else{
    node* temp = new node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
    }
}

void insertatposition(node* &head, node* &tail,int pos,int d){
    if(pos==1){
        insertathead(head,d);
        return;
    }
     node* temp = head;
    int cont = 1;
    while(cont<pos-1){
        temp = temp ->next;
        cont++;
    }
    if(temp -> next == NULL){
        insertattail(tail,d);
        return ;
    }

    node* nodetoinsert = new node(d);
    nodetoinsert -> next = temp -> next;
    temp -> next -> prev = nodetoinsert;
    temp -> next = nodetoinsert;
    nodetoinsert -> prev = temp;
   
}

void deleteanode(node* head,node* tail,int position){
        //to delete first node
    if(position ==1){
        node* temp = head;
        temp -> next -> prev = NULL;
        head = temp -> next;
        temp -> next = NULL;
        delete temp;

    }
    //to delete other any position of node
    else{
        node* curr = head;
        node* prev = NULL;

        int cnt =1;
        while(cnt<position){
            prev = curr;
            curr = curr -> next;
            cnt++;
        }
        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
    }
}


int getlen(node* head){
    node * temp = head;
    int len =0;
    while(temp!=NULL){
        len++;
        temp = temp->next;
    }
   return len;
}

void print(node* head){
    node * temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){
    node* node1 = new node(10);
    node* head = node1;
    node* tail = node1;
    print(head);

    //cout<<getlen(head);

    insertathead(head,12);
    print(head);
    insertattail(tail,15);
    print(head);
    cout<<endl;
    insertatposition(head,tail,2,100);
    print(head);

    deleteanode(head,tail,4);
    print(head);
    
}