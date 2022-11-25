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
void addathead(node* &head,int d){
    node* temp = new node(d);
    temp -> next = head;
    head = temp;
    
}


//to add elements from end

void addattail(node* &tail,int d){
    node* temp = new node(d);
    tail -> next = temp;
    tail = temp;
}



//to add element at any position
void addatposition(node* &head,node* &tail,int pos,int d){
    if(pos==1){
        addathead(head,d);
        return;
    }
    
    node* temp = head;
    int cont = 1;
    while(cont<pos-1){
        temp = temp ->next;
        cont++;
    }
    if(temp -> next == NULL){
        addattail(tail,d);
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
void print(node* &head){
    node* temp = head;
    while(temp != NULL){
        cout<< temp-> a<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}

node* removeduplicates(node* &head){
    if(head==NULL){
        return NULL;
    }
    node* curr = head;
    while(curr!=NULL){
        if(curr->next != NULL && curr->a == curr->next ->a){
            node* next = curr->next->next;
            node* nodetodelete = curr->next;
            delete(nodetodelete);
            curr -> next = next;
        }
        else{
            curr = curr->next;
        }
    }
    return head;
}



int main(){
    node* node1 = new node(1);
    node* head = node1;
    node* tail = node1;
    addattail(tail,2);
    addattail(tail,2);
    addattail(tail,3);
    addattail(tail,3);
    addattail(tail,3);
    addattail(tail,3);
    addattail(tail,4);
    print(head);
    node* head2 = removeduplicates(head);
    print(head2);
    

return 0;
}