#include<bits/stdc++.h>
using namespace std;


//creating a single link list layout
class node{
    public:
int data;
node* next;

//constructor
node(int a){
    this -> data = a;
    this -> next = NULL;
}
~node(){
    int val = this-> data;
    if(this-> next != NULL){
        delete next ;
        next = NULL;
    }
    cout<<"memory is free for node of data : "<<val<<endl;
}
};
//class created

void insertnode(node* &tail,int element,int d){
    if(tail==NULL){
        node* newnode = new node(d);
        tail = newnode;
        newnode -> next = newnode; 
    }
    else{
        node* curr = tail;
        while(curr-> data != element){
            curr=curr-> next;
        }
        node* temp = new node(d);
        temp -> next = curr -> next;
        curr -> next = temp;
    }
}
void deletenode(node* tail, int value){
     if(tail == NULL){
        cout<<"list is empty "<<endl;
        return;
     }
     else{
         node* prev = tail;
         node* curr = prev-> next;
        
        while(curr-> data != value){
            prev = curr;
            curr = curr -> next;
        }
        prev -> next = curr -> next;
        if(tail==curr){
            tail = prev;
        }
        curr -> next = NULL;
        delete curr;
     }
}

void print(node* tail){
    node* temp = tail;
    do{
        cout<<tail-> data<<" ";
        tail = tail-> next;
    }while(tail != temp);
    cout<<endl; 
}

int main(){
    node* tail = NULL;
    //inserting in empty list
    insertnode(tail,5,1);
    print(tail);
    for(int i=1;i<10;i++){
        insertnode(tail,i,i+1);
        print(tail);
    }
    /*
    insertnode(tail,3,7);
    print(tail);
    insertnode(tail,7,10);
    print(tail);
*/
deletenode(tail,8);
print(tail);

}