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

bool check(node* head , int k){
    if(head==NULL){
        return true;
    }

    node* curr = head;
    int count =0;
    while(count<k){
        head = head-> next;
        count++;
    }
    if(head == curr){
        return true;
    }
    else{
        return false;
    }

    
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




int main(){
    node* node1 = new node(10);
    node* head = node1;
    node* prev = node1;
    int d;
    for(int i=0;i<3;i++){
        cout<<"Enter next element : ";
        cin>>d;
        topointhead(head,d);
    }
    printnode(head);

bool ans1 = check(head,4);
cout<<ans1;
    
}