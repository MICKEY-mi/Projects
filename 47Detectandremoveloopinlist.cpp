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

bool detectloop(node* head){
    if(head==NULL){
        return false;
    }
    map<node*,bool> visited;
    node* temp = head;
    while(temp!=NULL){
        if(visited[temp]==true){
            cout<<"present at element "<<temp;
            return true;
        }
        visited[temp]=true;
        temp = temp->next;
    }
    return false;
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
    printnode(head);

    bool ans = detectloop(head);
    cout<<ans;

}