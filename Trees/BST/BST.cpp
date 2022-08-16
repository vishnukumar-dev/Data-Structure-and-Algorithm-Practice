# include <bits/stdc++.h>
# include "BST.h"
using namespace std;

//============================Taking Input Levelwise==========================
BST<int>* takeInputLevelWise(){
    int rootData;
    cout<<"Enter root data : ";
    cin>>rootData;

    BST<int>*root = new BST<int>(rootData);

    queue<BST<int>*>pendingNode;
    pendingNode.push(root);  //using queue to maintain data of those nodes whose 
    // child data is not taken yet

    while (pendingNode.size() != 0)
    {
        BST<int>*front = pendingNode.front();
        pendingNode.pop();
        
        cout<<"Enter left child of "<<front->data<<" : ";
        int leftChildData;
        cin>>leftChildData;
        if(leftChildData != -1){
            BST<int>*child = new BST<int>(leftChildData);
            front->left = child;
            pendingNode.push(child);
        }

        cout<<"Enter right child of "<<front->data<<" : ";
        int rightChildData;
        cin>>rightChildData;
        if(rightChildData != -1){
            BST<int>*child = new BST<int>(rightChildData);
            front->right = child;
            pendingNode.push(child);
        }
    }
    return root;
}

//============================Print Levelwise==========================
void printLevelWise(BST<int>*root){
    if(root == nullptr) return;
    cout<<endl<<root->data<<endl;
    queue<BST<int>*>pendingNode;
    pendingNode.push(root);

    while (pendingNode.size() != 0)
    {
        BST<int>*front = pendingNode.front();
        pendingNode.pop();
        cout<<front->data<<" :";
        if(front->left != nullptr ){
            cout<<" L "<<front->left->data<<" ";
            pendingNode.push(front->left);
        }
        else{
            cout<<" L -1 ";
        }

        if(front->right != nullptr ){
            cout<<" R "<<front->right->data<<" ";
            pendingNode.push(front->right);
        }
        else{
            cout<<" R -1 ";
        } 
        cout<<endl;       
    }  
}

//=============Create and Insert Duplicate Nodes (Binary Tree)==================
void duplicate(BST<int>*root){
    if(root==nullptr) return;
    BST<int>*temp = root->left;
    BST<int>*newNode = new BST<int>(root->data);
    root->left = newNode;
    newNode->left = temp;
    duplicate(newNode->left);
    duplicate(root->right);
}

 //=======================LCA (Binary Tree)========================
int LCA(BST<int>*root, int n1, int n2){
    if(root == nullptr) return -1;
    if(root->data == n1 or root->data == n2) return root->data;
    int x1 = LCA(root->left, n1, n2); 
    int x2 = LCA(root->right, n1, n2);
    if(x1 == -1 and x2 == -1) return -1;
    else if (x1 != -1 and x2 == -1) return x1;
    else if (x1 == -1 and x2 != -1) return x2;
    else if (x1 != -1 and x2 != -1) return root->data;
     
}



int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        // freopen("output.txt","w",stdout);
    #endif

    BST<int>*root = takeInputLevelWise();

    // printLevelWise(root);
    // duplicate(root);
    cout<<endl<<"========================================"<<endl;
    // printLevelWise(root);
    
    cout<<LCA(root, 12, 78 );

    return 0;
}