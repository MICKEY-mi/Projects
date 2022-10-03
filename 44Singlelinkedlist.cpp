#include<bits/stdc++.h>
using namespace std;


//creating a single link list layout
class node{
    public:
int a;
node* next;

//constructor
node(int a){
    this -> a = a;
    this -> next = NULL;
}
};
//class created


//to add elements from start
void topointhead(node* &head,int d){
    node* temp = new node(d);
    temp -> next = head;
    head = temp;
    
}


//to add elements from end

void topointtail(node* &tail,int d){
    node* temp = new node(d);
    tail -> next = temp;
    tail = temp;
}



//to add element at any position
void toposition(node* &head,node* &tail,int pos,int d){
    if(pos==1){
        topointhead(head,d);
        return;
    }
    
    node* temp = head;
    int cont = 1;
    while(cont<pos-1){
        temp = temp ->next;
        cont++;
    }
    if(temp -> next == NULL){
        topointtail(tail,d);
        return ;
    }

    node* toposition = new node(d);
    toposition -> next = temp -> next;
    temp -> next = toposition;
   
}

//to delete node
void deletenode(int position ,node* &head){
    //to delete first node
    if(position ==1){
        node* temp = head;
        head = head -> next;
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


//to print list 
void printnode(node* &head){
    node* temp = head;
    while(temp != NULL){
        cout<< temp-> a<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}




int main(){
    node* node1 = new node(10);
    //cout<< node1 -> a<<endl;
    //cout<< node1 -> next<<endl;

    node* head = node1;
    node* tail = node1;
    printnode(head);

    topointtail(tail,12);
    printnode(head);

    topointtail(tail,15);
    printnode(head);

    toposition(head,tail,4,22);
    printnode(head);

cout<<head -> a<<endl<<tail -> a<<endl;

deletenode(1,head);
printnode(head);

return 0;
}