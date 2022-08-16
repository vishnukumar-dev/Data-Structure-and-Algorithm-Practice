# include <bits/stdc++.h>
# include "BinaryTreeNode.h"
using namespace std;


//===========================Printing Binary Tree===============================
void printTree(BinaryTreeNode<int>* root){
    if(root == nullptr) return;
    cout<<root->data<<" : ";
    if(root->left != nullptr){
        cout<<" L "<<root->left->data;
    }
    if(root->right != nullptr){
        cout<<" R "<<root->right->data;
    }
    cout<<endl;

    printTree(root->left);
    printTree(root->right);
}

//=========================Take Input Binary Tree==========================
BinaryTreeNode<int>* takeInput(){
    int rootData ;
    cout<<"Enter Data : ";
    cin>>rootData;
    if(rootData == -1) return NULL;

    BinaryTreeNode<int>*root = new BinaryTreeNode<int>(rootData);
    BinaryTreeNode<int>*leftChild = takeInput();
    BinaryTreeNode<int>*rightChild = takeInput();
    root->left = leftChild;
    root->right = rightChild;

    return root;
}

//============================Taking Input Levelwise==========================
BinaryTreeNode<int>* takeInputLevelWise(){
    int rootData;
    cout<<"Enter root data : ";
    cin>>rootData;

    BinaryTreeNode<int>*root = new BinaryTreeNode<int>(rootData);

    queue<BinaryTreeNode<int>*>pendingNode;
    pendingNode.push(root);  //using queue to maintain data of those nodes whose 
    // child data is not taken yet

    while (pendingNode.size() != 0)
    {
        BinaryTreeNode<int>*front = pendingNode.front();
        pendingNode.pop();
        
        cout<<"Enter left child of "<<front->data<<" : ";
        int leftChildData;
        cin>>leftChildData;
        if(leftChildData != -1){
            BinaryTreeNode<int>*child = new BinaryTreeNode<int>(leftChildData);
            front->left = child;
            pendingNode.push(child);
        }

        cout<<"Enter right child of "<<front->data<<" : ";
        int rightChildData;
        cin>>rightChildData;
        if(rightChildData != -1){
            BinaryTreeNode<int>*child = new BinaryTreeNode<int>(rightChildData);
            front->right = child;
            pendingNode.push(child);
        }
    }
    return root;
}

//============================Print Levelwise==========================
void printLevelWise(BinaryTreeNode<int>*root){
    if(root == nullptr) return;
    cout<<endl<<root->data<<endl;
    queue<BinaryTreeNode<int>*>pendingNode;
    pendingNode.push(root);

    while (pendingNode.size() != 0)
    {
        BinaryTreeNode<int>*front = pendingNode.front();
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

//===============print level wise in reverse order============================

//===================================Counting Nodes============================
int numNodes(BinaryTreeNode<int>* root){
    if(root == nullptr) return 0;
    return 1 + numNodes(root->left) + numNodes(root->right);
}

//=========================Find a Node in Binary Tree===========================
bool findX(BinaryTreeNode<int>* root, int x){
    if(root == nullptr) return false;
    if(root->data == x) return true;
    bool ans= findX(root->left,x); 
    if(ans == true) return ans;
     ans = findX(root->right, x);
    if(ans == true) return ans;
}

//=========================height of Binary Tree=============================

// int height(BinaryTreeNode<int>* root){
//     if(root == nullptr) return 0;
//     int h = -1;

//     int lch = height(root->left);  // lch : left child height
//     h = max(lch,h);
//     int rch = height(root->right); // rch : right child height
//     h = max(rch, h);

//     h+=1;
//     return h;
// }

int heightBT(BinaryTreeNode<int>*root){
    if(root == nullptr) return 0;
    int leftHeight = heightBT(root->left);
    int rightHeight = heightBT(root->right);
    return max(leftHeight, rightHeight)+1;
}

//=========================Mirroring the given binary tree=======================
void mirror(BinaryTreeNode<int>* root){
    if(root == nullptr) return;
    
    mirror(root->left);
    mirror(root->right);

    BinaryTreeNode<int>* temp;

    temp = root->left;
    root->left = root->right;
    root->right = temp;
}

//========================Inorder Binary Tree Traversal==========================
void inorder(BinaryTreeNode<int>*root){
    if(root == nullptr) return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

//=====================Preorder Binary Tree Traversal===========================
void preorder(BinaryTreeNode<int>*root){
    if(root == nullptr) return;
    cout<<root->data<<" ";

    preorder(root->left);
    preorder(root->right);
}

//=====================Postorder Binary Tree Traversal===========================
void postorder(BinaryTreeNode<int>*root){
    if(root == nullptr) return;

    postorder(root->left);
    postorder(root->right);

    cout<<root->data<<" ";
}

//TODO: Construct Tree from Preorder and Inorder
//TODO: Construct Tree from Postorder and Inorder

//==========================Diameter of the Binary tree========================
int height(BinaryTreeNode<int>* root){
    if( root == nullptr) return 0;
    return 1 +  max(height(root->left), height(root->right));
}

int diameter(BinaryTreeNode<int>* root){
    if(root == nullptr) return 0;
    
    int option1 = height(root->left)+height(root->right);
    int option2 = diameter(root->left);
    int option3 = diameter(root->right);
}

pair<int, int>heightDiameter(BinaryTreeNode<int>*root)  // pair is a inbuilt class
{
    if (root == nullptr){
        pair<int, int>p;
        p.first = 0;
        p.second = 0;
        return p;
    }

    pair<int,int>leftAns = heightDiameter(root->left);
    pair<int,int>rightAns = heightDiameter(root->right);
    int ld = leftAns.second;
    int lh = leftAns.first;
    int rd = rightAns.second;
    int rh = rightAns.first;

    int height = 1+max(rh,lh);
    int diameter = max(lh+rh, max(ld,rd));

    pair<int,int>p;
    p.first = height;
    p.second = diameter;

    return p;
}    

//=================Find the Min and Max of the Binary Tree===================
// TODO: this answer is not done yet 
pair<int,int>minAndMax(BinaryTreeNode<int>*root){
    if(root == nullptr){
        pair<int,int>p;
        p.first = INT_MAX;
        p.second = INT_MIN;
        return p;
    }

    pair<int, int>leftAns = minAndMax(root->left);
    pair<int, int>rightAns = minAndMax(root->right);

    int lmin = leftAns.first;
    int lmax = leftAns.second;
    int rmin = rightAns.first;
    int rmax = rightAns.second;

    int minimum = min(lmin, rmin);
    int maximum = max(lmax, rmax);

    pair<int, int>p;
    p.first = minimum;
    p.second = maximum;

    return p;
}

//TODO: ===============Check If Tree is Balanced====================
bool isBalanced(BinaryTreeNode<int>*root){
    
}


// ===========Print Right/Left view of Binary tree==================
//  vector<int> rightSideView(TreeNode* root) {
//         vector<int>v;
//         if(root == nullptr) return v;
//         queue<TreeNode*>q;
//         q.push(root);
//         while(!q.empty())
//         {
//             int levelSize = q.size();
//             for(int i=0; i<levelSize; i++)
//             {
//                 TreeNode* curr = q.front();
//                 q.pop();
      // for left view change condition to (i==0) instead of (i == levelSize-1) 
//                 if(i == levelSize-1){    
//                     v.push_back(curr->val);  
//                 }
//                 if(curr->left != nullptr)
//                 {
//                     q.push(curr->left);
//                 }
//                 if(curr->right != nullptr)
//                 {
//                     q.push(curr->right);
//                 }
//             }
//         }
//         return v;
//     }



int main()
{


    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    // BinaryTreeNode<int>* root = new BinaryTreeNode<int>(1);
    // BinaryTreeNode<int>* l = new BinaryTreeNode<int>(2);
    // BinaryTreeNode<int>* r = new BinaryTreeNode<int>(3);

    // root->left =l;
    // root->right =r;

    // BinaryTreeNode<int>*root = takeInput();
    BinaryTreeNode<int>*root = takeInputLevelWise();
    // printTree(root);
    printLevelWise(root);

    // cout<<numNodes(root);
    // cout<<endl<< findX(root, 7);
    // cout<<endl<<heightBT(root);
    // mirror(root);

    cout<<endl;
    // inorder(root);
    // preorder(root);
    // postorder(root);

    delete root;
    return 0;
}

// 1 2 3 4 5 6 7 -1 -1 8 9 -1 -1 -1 10 -1 -1 -1 -1 -1 -1