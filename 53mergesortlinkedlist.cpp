#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;

    node(int d){
        this-> data = d;
        this->next = NULL;
    }
};

node* findmid(node* &head){
    node* slow= head;
    node* fast = head->next;
    while(fast!=NULL && fast->next!=NULL){
        fast=fast->next->next;
        slow = slow->next;
    }
    return slow;
}


node* merge(node* left,node* right){
    if(left==NULL){
        return right;        
    }
    if(right==NULL){
        return left;
    }


    node* ans = new node(-1);
    node* temp = ans;
    while(left!=NULL && right!=NULL){
        if(left->data < right->data){
            temp->next = left;
            temp = left;
            left = left->next;
        }
        else{
            temp->next = right;
            temp = right;
            right = right->next;
        }
    }
    while(left!=NULL){
            temp->next = left;
            temp = left;
            left = left->next;
    }
    
    while(right!=NULL){
            temp->next = right;
            temp = right;
            right = right->next;
    }

    ans = ans->next;
    return ans;
}



void insertattail(node* &tail,int d){
    node* temp = new node(d);
    tail->next = temp;
    temp->next = NULL;
    tail = temp;
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



node* mergesort(node* &head){
    if(head==NULL || head->next == NULL){
        return head;
    }
    node* mid = findmid(head);

    node* left = head;
    node* right = mid->next;
    mid->next = NULL;

    left = mergesort(left);
    right = mergesort(right);

    node* result = merge(left,right);
    return result;
}

int main(){
    node* node1 = new node(10);
    node* head = node1;
    node* tail = node1;
    insertattail(tail,1);
    insertattail(tail,4);
    insertattail(tail,5);
    insertattail(tail,8);
    insertattail(tail,2);
print(head);
node* ans = mergesort(head);
print(ans);
}