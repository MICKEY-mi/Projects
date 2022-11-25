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

node* solve(node* head1,node* head2){
    if(head1->next ==NULL){
        head1->next = head2;
        return head1;
    }

    node* curr1 = head1;
    node* curr2 = head2;
    node* next1 = head1->next;
    node* next2 = head2->next;

    while(next1 != NULL && curr2 != NULL){
        if((curr2->data >= curr1->data) && (curr2->data<=next1->data)){
            curr1->next = curr2;
            next2 = curr2->next;
            curr2->next = next1;

            curr1 = curr2;
            curr2 = next2;
        }
        else{
            curr1=next1;
            next1 = next1->next;

            if(next1==NULL){
                curr1->next = curr2;
                return head1;
            }

        }
    }
    return head1;
}

node* merge(node* head1,node* head2){
    if(head1->next==NULL){
        return head2;        
    }
    if(head2->next==NULL){
        return head1;
    }

    if(head1->data<=head2->data){
        return solve(head1,head2);
    }
    else{
        return solve(head2,head1);
    }
    
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



int main(){
    node* node1 = new node(5);
    node* tail1 = node1;
    node* head1 = node1;
    insertattail(tail1,7);
    insertattail(tail1,8);
    insertattail(tail1,111);
    print(head1);

    node* node2 = new node(1);
    node* tail2 = node2;
    node* head2= node2;
    insertattail(tail2,17);
    insertattail(tail2,18);
    insertattail(tail2,19);
    print(head2);

    node* newhead = merge(head1,head2);
    print(newhead);
}