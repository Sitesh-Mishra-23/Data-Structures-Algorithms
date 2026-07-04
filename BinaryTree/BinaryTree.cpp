#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        this->data = val;
        this->left= NULL;
        this->right =NULL;
    }
};

Node* createTree(){

    int value;
    cout<<"Enter value for Node:"<<endl;
    cin>>value;
    
    if(value==-1){
        return NULL;
    }
    
    Node* root = new Node(value);
    cout<<"left for Node "<<root->data<<endl;
    root->left = createTree();
    
    cout<<"right for Node "<<root->data<<endl;
    root->right = createTree();
    
    return root;
}

void preOrderTraversal(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<endl;
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

void postOrderTraversal(Node* root){
    if(root==NULL){
        return;
    }
    
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout<<root->data<<endl;
}

void inOrderTraversal(Node* root){
    if(root==NULL){
        return;
    }
    
    postOrderTraversal(root->left);
    cout<<root->data<<endl;
    postOrderTraversal(root->right);
    
}

int main(){
    
    Node* root = createTree();
    cout<<root->data<<endl;
    return 0;
}