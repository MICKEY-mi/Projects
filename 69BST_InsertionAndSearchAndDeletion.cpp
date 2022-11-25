#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;
     
     node(int d){
        this->data= d;
        this->left=NULL;
        this->right= NULL;
     }
};


bool searchInBst(node* root , int key){
    if(root==NULL)
    return false;
    
    if(root->data==key){
        return true;
    }
    if(key<root->data){
        return searchInBst(root->left,key);
    }
    else{
        return searchInBst(root->right,key);
    }

}


void levelordertraversal(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        if(temp==NULL){
            cout<<endl;
        
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }

        }
    }
}

node*  insertIntoBST(node* root,int data){
    //basecase
    if(root==NULL){
        root = new node(data);
        return root;
    }
    if(data > root->data){
        root->right = insertIntoBST(root->right,data);
    }
    else{
        root->left = insertIntoBST(root->left,data);
    }
    return root;
}

void takeInput(node* &root ){
    int data;
    cin>>data;
    while(data!=-1){
        root = insertIntoBST(root,data);
        cin>>data;
    }
}

node* minval(node* root){
    node* temp = root;
    while (temp->left!=NULL)
    {
        temp=temp->left;
        /* code */
    }
    return temp;
    
}

node* deletenode(node* root,int val){
    if(root==NULL){
        return root;
    }
    if(root->data == val){
        //0child
        if(root->left==NULL && root->right==NULL){
            delete root;
            return NULL;
        }
        //1child
        if(root->left!=NULL && root->right==NULL){
            node* temp = root->left;
            delete root;
            return temp;
        }
        if(root->right!=NULL&& root->left==NULL){
            int mini = minval(root->right)->data;
            root->data = mini;
            root->right = deletenode(root->right,mini);
            return root;
        }
    }
    else if(root->data> val){
        root->left = deletenode(root->left,val);
        return root;
    }
    
    else {
        root->right = deletenode(root->right,val);
        return root;
    }

}


int main(){

node* root = NULL;
cout<<"Enter data to create BST "<<endl;
takeInput(root);
levelordertraversal(root);
cout<<endl;
    
    insertIntoBST(root,5);
    levelordertraversal(root);

    cout<<endl<<searchInBst(root,15)<<endl;
    cout<<endl;

    root = deletenode(root,30);

    levelordertraversal(root);

    return 0;
}