#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int d){
        this->data = d;
        left = NULL;
        right = NULL;
    }
};

node* buildtree(node* root){
    cout<<"Enter the data : "<<endl;
    int data;
    cin>>data;
    root = new node(data);

    if(data==-1){
        return NULL;
    }

    cout<<"Enter the left child "<<endl;
    root->left = buildtree(root->left);
    cout<<"Enter the right child: "<<endl;
    root->right= buildtree(root->right);
    return root;
}

void preorder(node* root){
    if(root==NULL){
        return ;
    }
    preorder(root->left);
    cout<<root->data<<" ";
    preorder(root->right);
}

int main(){
    node* root = NULL;

    root = buildtree(root);

    preorder(root);

return 0;

}