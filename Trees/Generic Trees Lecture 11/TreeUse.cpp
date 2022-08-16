#include <bits/stdc++.h>
#include "TreeNode.h" // to include the local header file
#include <queue>
using namespace std;

//-------------------Fucntion To Take User Input------------------
TreeNode<int> *takeInput()
{
    int rootData;
    cout << "Enter data : ";
    cin >> rootData;
    TreeNode<int> *root = new TreeNode<int>(rootData);

    int n;
    cout << "Enter number of childeren of " << rootData << " : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        TreeNode<int> *child = takeInput();
        root->children.push_back(child);
    }

    return root;
}

//-----------------------Function to Print Tree---------------------
void printTree(TreeNode<int> *root)
{

    if (root == nullptr)
        return; // NO need of this base case in generic trees
    //  but we use this to handle the Edge Case, in case if first node is a null

    cout << root->data << " : ";
    for (int i = 0; i < root->children.size(); i++)
    {
        cout << root->children[i]->data << ", ";
    }
    cout << endl;
    for (int i = 0; i < root->children.size(); i++)
    {
        printTree(root->children[i]);
    }
}

// -------------------Taking input Level wise---------------------------
TreeNode<int> *takeInLevelWise()
{
    int rootData;
    cout << endl
         << "Enter root data : ";
    cin >> rootData;
    TreeNode<int> *root = new TreeNode<int>(rootData);

    queue<TreeNode<int> *> pendingNodes;

    pendingNodes.push(root);
    while (pendingNodes.size() != 0)
    {
        TreeNode<int> *front = pendingNodes.front();
        pendingNodes.pop();
        cout << endl
             << "Enter number of children of " << front->data << " : ";
        int numChild;
        cin >> numChild;

        for (int i = 0; i < numChild; i++)
        {
            cout << endl
                 << "Enter " << i << "th child of " << front->data << " : ";
            int childData;
            cin >> childData;

            TreeNode<int> *child = new TreeNode<int>(childData);
            front->children.push_back(child);
            pendingNodes.push(child);
        }
    }

    return root;
}

//----------------counting number of nodes of a given Tree-------------------

int countNodes(TreeNode<int> *root)
{
    int ans = 1;
    for (int i = 0; i < root->children.size(); i++)
    {
        ans += countNodes(root->children[i]);
    }

    return ans;
}

//------------------------Sum of nodes of a given Tree----------------------
int sumNodes(TreeNode<int> *root)
{
    int sum = 0;
    sum += root->data;
    for (int i = 0; i < root->children.size(); i++)
    {
        sum += sumNodes(root->children[i]);
    }
    return sum;
}

// -----------------------Max value in the tree-------------------------------
int maxNode(TreeNode<int> *root)
{
    int m = INT_MIN;

    for (int i = 0; i < root->children.size(); i++)
    {
        int cm = maxNode(root->children[i]);
        m = max(cm, m);
    }
    m = max(root->data, m);
    return m;
}

// --------------------Printing all node at Depth k in the TREE------------------------
void printAtLevelK(TreeNode<int> *root, int k)
{
    if (root == nullptr)
        return;

    if (k == 0)
    {
        cout << endl
             << root->data;
        return;
    }

    for (int i = 0; i < root->children.size(); i++)
    {
        printAtLevelK(root->children[i], k - 1);
    }
}

//---------------Counting the number of all the leaf nodes in the Tree-------------------
int countLeaf(TreeNode<int> *root)
{
    if (root->children.size() == 0)
        return 1;
    int n = 0;
    for (int i = 0; i < root->children.size(); i++)
    {
        n += countLeaf(root->children[i]);
    }
    return n;
}

//---------------------------Pre Traversal of a Generic Tree------------------------------
void preTraversal(TreeNode<int> *root)
{
    if (root == nullptr)
        return;
    cout << root->data << " ";
    for (int i = 0; i < root->children.size(); i++)
    {
        preTraversal(root->children[i]);
    }
}

//--------------------------Post Traversal of a Generic Tree-------------------------------
void postTraversal(TreeNode<int> *root)
{
    if (root == nullptr)
        return;

    for (int i = 0; i < root->children.size(); i++)
    {
        postTraversal(root->children[i]);
    }
    cout << root->data << " ";
}

//----------------------------------------Delete Tree---------------------------------------
void deleteTree(TreeNode<int> *root)
{
    if (root == nullptr)
        return;
    for (int i = 0; i < root->children.size(); i++)
    {
        deleteTree(root->children[i]);
    }

    delete root;
}

//-----------------------Checking if X present in the tree or not--------------------------
bool containX(TreeNode<int> *root, int x)
{
    if (root == nullptr)
        return false;

    if (root->data == x)
        return true;

    for (int i = 0; i < root->children.size(); i++)
    {
        bool ans = containX(root->children[i], x);
        if (ans == true)
            return ans;
    }

    return false;
}

//------------Counting number of nodes which are greater than given value x---------------
int greaterX(TreeNode<int> *root, int x)
{
    if (root == nullptr)
        return 0;

    int n = 0;
    for (int i = 0; i < root->children.size(); i++)
    {
        n += greaterX(root->children[i], x);
    }

    if (root->data > x)
        n++;
    return n;
}

// checking if two given trees are structurally identical
bool structurallyIdenticalCheck(TreeNode<int> *root1, TreeNode<int> *root2)
{
    if (root1 == nullptr && root2 == nullptr)
        return true;
    // else return false;
    int c1 = root1->children.size();
    int c2 = root2->children.size();
    if (root1->data != root2->data || c1 != c2)
        return false;

    for (int i = 0; i < c1; i++)
    {
        bool ans = structurallyIdenticalCheck(root1->children[i], root2->children[i]);
        if (ans == false)
            return ans;
    }

    return true;
}

// height of Generic Tree
int height(TreeNode<int> *root)
{
    if (root == nullptr)
        return 0;
    int h = 0;
    for (int i = 0; i < root->children.size(); i++)
    {
        int ch = height(root->children[i]);
        h = max(ch, h);
    }
    h += 1;
    return h;
}

// Next larger Number in the tree
int nextLargerNum(TreeNode<int> *root, int x)
{
    if (root == nullptr)
        return NULL;
    int ans = NULL;
    if (root->data > x)
    {
        ans = root->data;
    }

    for (int i = 0; i < root->children.size(); i++)
    {
        int temp = nextLargerNum(root->children[i], x);
        if (ans == NULL)
        {
            ans = temp;
        }
        else if (ans > temp)
        {
            ans = temp;
        }
    }

    return ans;
}

// TODO: In generic tree problem number 23 and 24

int main()

{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    // TreeNode<int>*root = new TreeNode<int>(1);
    // TreeNode<int>*node1 = new TreeNode<int>(2);
    // TreeNode<int>*node2 = new TreeNode<int>(3);

    // root->children.push_back(node1);
    // root->children.push_back(node2);

    // TreeNode<int>*root = takeInput();

    TreeNode<int> *root = takeInLevelWise();
    // TreeNode<int>*root1 = takeInLevelWise();

    printTree(root);
    // printTree(root1);

    // cout<<endl<<countNodes(root);
    // cout<<endl<<sumNodes(root);
    // cout<<endl<<maxNode(root);
    // printAtLevelK(root, 2);
    // cout<<endl<<countLeaf(root);6
    // preTraversal(root);
    // postTraversal(root);
    // deleteTree(root);  //deleting tree using function
    // delete root; // deleteing tree using distructor

    // cout<<endl<<containX(root, 3);
    // cout<<endl<<greaterX(root, 10);
    // cout<<endl<<structurallyIdenticalCheck(root, root1);
    // cout<<endl<<nextLargerNum(root, 130);
    cout << endl
         << height(root);

    return 0;
}

// 1 3 2 3 4 0 2 5 6 0 0 0