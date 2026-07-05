#include<iostream>
#include<queue>
#include<vector>
#include<map>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;
    
    Node(int val){
        this->data=val;
        this->left =NULL;
        this->right = NULL;
    }
};

Node* createTree(){
    int value;
    cout<<"enter the value for node:"<<endl;
    cin>>value;
    
    if(value==-1){
        return NULL;
    }
    
    Node* root= new Node(value);
    
    cout<<"enter for left of node "<<root->data<<endl;
    root->left = createTree();
    
    cout<<"enter for right of node "<<root->data<<endl;
    root->right = createTree();
    
    return root;
}

void inOrderTraversal(Node* root){
    if(root==NULL){
        return;
    }
    
    inOrderTraversal(root->left);
    cout<<root->data;
    inOrderTraversal(root->right);
}

void levelOrderTraversal(Node* root){
    if(root==NULL){
        return;
    }
    queue<Node*>q;
    q.push(root);
    q.push(NULL);
    
    while(!q.empty()){
        Node* front  = q.front();
        q.pop();
        
        if(front==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<front->data<<" ";
            if(front->left!=NULL){
                q.push(front->left);
            }
            if(front->right!=NULL){
                q.push(front->right);
            }
        }
    }
}

void printLeftView(Node* root,int level,vector<int>&leftview){
    if(root==NULL){
        return;
    }
    if(level==leftview.size()){
        leftview.push_back(root->data);
    }
    
    printLeftView(root->left,level+1,leftview);
    printLeftView(root->right,level+1,leftview);
    
}

void printRightView(Node* root,int level,vector<int>&rightview){
    if(root==NULL){
        return;
    }
    if(level==rightview.size()){
        rightview.push_back(root->data);
    }
    printRightView(root->right,level+1,rightview);
    printRightView(root->left,level+1,rightview);
}

void topView(Node* root){
    map<int,int>mp;
    queue<pair<Node*,int>>q;
    q.push(make_pair(root,0));
    
    while(!q.empty()){
        pair<Node*,int> temp = q.front();
        q.pop();
        
        Node* frontNode = temp.first;
        int hd = temp.second;
        
        if(mp.find(hd)==mp.end()){
            mp[hd]=frontNode->data;
        }
        
        if(frontNode->left!=NULL){
            q.push(make_pair(frontNode->left,hd-1));
        }
        if(frontNode->right!=NULL){
            q.push(make_pair(frontNode->right,hd+1));
        }
    }
    
    cout<<"printing top view:"<<endl;
    for(auto i:mp){
        cout<<i.second<<" ";
    }
}
void bottomView(Node* root){
    map<int,int>mp;
    queue<pair<Node*,int>>q;
    q.push(make_pair(root,0));
    
    while(!q.empty()){
        pair<Node*,int> temp = q.front();
        q.pop();
        
        Node* frontNode = temp.first;
        int hd = temp.second;
        
        
        mp[hd]=frontNode->data;
        
        
        if(frontNode->left!=NULL){
            q.push(make_pair(frontNode->left,hd-1));
        }
        if(frontNode->right!=NULL){
            q.push(make_pair(frontNode->right,hd+1));
        }
    }
    
    cout<<"printing bottom view:"<<endl;
    for(auto i:mp){
        cout<<i.second<<" ";
    }
}

void printleftBoundary(Node* root){
    if(root==NULL){
        return;
    }
    if(root->left==NULL && root->right==NULL){
        return;
    }
    
    cout<<root->data;
    if(root->left!=NULL){
        printleftBoundary(root->left);
    }
    else{
        printleftBoundary(root->right);
    }
}

void printrightBoundary(Node* root){
    if(root==NULL){
        return;
    }
    if(root->left==NULL && root->right==NULL){
        return;
    }
    
   
    if(root->right!=NULL){
        printrightBoundary(root->right);
    }
    else{
        printrightBoundary(root->left);
    }
    cout<<root->data;
}

void printleafBoundary(Node* root){
    if(root==NULL){
        return;
    }
    if(root->left==NULL && root->right==NULL){
        cout<<root->data<<" ";
    }
    
    printleafBoundary(root->left);
    printleafBoundary(root->right);
}


void BoundaryTraversal(Node* root){
    if(root==NULL){
        return;
    }
    printleftBoundary(root);
    printleafBoundary(root);
    
    if(root->right!=NULL){
        printrightBoundary(root->right);
    }
    else{
        printrightBoundary(root->left);
    }
    
}
// 10 20 40 -1 -1 50 70 110 -1 -1 111 -1 -1 80 -1 -1 30 -1 60 -1 90 112 -1 -1 113 -1 -1
int main(){
    Node* root = createTree();
    BoundaryTraversal(root);
    // levelOrderTraversal(root);
    // vector<int>leftview;
    // printLeftView(root,0,leftview);
    
    // for(int x:leftview){
    //     cout<<x<<" ";
    // }
    // topView(root);
}