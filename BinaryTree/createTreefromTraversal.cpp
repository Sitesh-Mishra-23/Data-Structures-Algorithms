#include<iostream>
#include<queue>
using namespace std;

class Node{
public:
    int data;
    Node* right;
    Node* left;
    
    Node(int val){
        this->data=val;
        this->right = NULL;
        this->left = NULL;
    }
};

void levelOrderTraversal(Node* root){
    queue<Node*>q;
    q.push(root);
    q.push(NULL);
    
    while(!q.empty()){
        Node* front = q.front();
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

int searchInOrder(int inOrder[],int size,int target){
    for(int i=0;i<size;i++){
        if(inOrder[i]==target){
            return i;
        }
    }
    return -1;
}

Node* constructTreefromTraversal(int preOrder[],int inOrder[],int &preIndex,int inOrderStart,int inOrderEnd, int size){
    if(preIndex>size || inOrderStart>inOrderEnd){
        return NULL;
    }
    
    int element  = preOrder[preIndex];
    preIndex++;
    Node* root = new Node(element);
    
    int position = searchInOrder(inOrder,size,element);
    
    root->left = constructTreefromTraversal(preOrder,inOrder,preIndex,inOrderStart,position-1,size);
    
    root->right = constructTreefromTraversal(preOrder,inOrder,preIndex,position+1,inOrderEnd,size);
    
    return root;
}

int main(){
    int inOrder[] = {10,8,6,2,4,12};
    int preOrder[] = {2,8,10,6,4,12};
    int size =6;
    int preIndex = 0;
    int inOrderStart = 0;
    int inOrderEnd = 5;
    
    Node* root=constructTreefromTraversal(preOrder,inOrder,preIndex,inOrderStart,inOrderEnd,size);
    
    cout<<"Tree :"<<endl;
    levelOrderTraversal(root);
    
}