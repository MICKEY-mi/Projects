#include<bits/stdc++.h>
using namespace std;

class node{
   public:
    int data;
    node* next;
    
    node(int d){
        this->data = d;
        this-> next = NULL;
    }
};


node* reverselinkedlist(node* head){
    if(head==NULL || head->next == NULL){
    return head;
    }
    node* prev = NULL;
    node* curr = head;
    node* forward = NULL;

    while(curr!=NULL){
        forward = curr-> next;
        curr -> next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}



void insertattail(node* &head,node* &tail,int d){
    node* temp = new node(d);
    if(head == NULL){
        head = temp;
        tail = temp;
        return ;
    }
    else{
    tail->next = temp;
    //temp->next = NULL;
    tail = temp;
    }
}

void print(node* &head){
    node* temp = head;
    while ((temp!=NULL))
    {
        cout<<temp->data<<" ";
        temp= temp->next;
    }
    cout<<endl;
}

node* add(node* first,node* second){
    int carry =0;
    node* anshead = NULL;
    node* anstail = NULL;

    while(first != NULL && second != NULL){
        int sum = carry + first->data + second -> data;
        int digit = sum%10;
        insertattail(anshead,anstail,digit);
        carry = sum/10;
        first = first->next;
        second = second->next;
    }

    while(first!=NULL){
        int sum = carry+first->data;
        int digit = sum%10;
        insertattail(anshead,anstail,digit);
        carry = sum/10;
        first = first->next;
        
    }
    
    while(second!=NULL){
        int sum = carry+second->data;
        int digit = sum%10;
        insertattail(anshead,anstail,digit);
        carry = sum/10;
        second = second->next;
    }

    while(carry!=0){
        int sum = carry;
        int digit = sum%10;
        insertattail(anshead,anstail,digit);
        carry = sum/10;
    }
    return anshead;
}




void insertattail1(node* &tail,int d){
    node* temp = new node(d);
    tail->next = temp;
    temp->next = NULL;
    tail = temp;
}



int main(){
    node* node1 = new node(5);
    node* tail1 = node1;
    node* head1 = node1;
    insertattail1(tail1,7);
    print(head1);
    node* first = reverselinkedlist(head1);
    print(first);

    node* node2 = new node(1);
    node* tail2 = node2;
    node* head2= node2;
    insertattail1(tail2,2);
    insertattail1(tail2,4);
    print(head2);
    node* second = reverselinkedlist(head2);
    print(second);

    node* ans = add(first,second);
    ans = reverselinkedlist(ans);

    print(ans);
    
}

