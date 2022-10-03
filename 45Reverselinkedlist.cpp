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


int main(){
    node* node1 = new node(10);
    node* head = node1;
    topointhead(head,11);
    topointhead(head,12);
    topointhead(head,13);
    printnode(head);
    node* temp = reverselinkedlist(head);
    node* head1 = temp;
    printnode(head1);


}