# include <bits/stdc++.h>
# include "Trees/Binary Trees Lecture 12/BinaryTreeNode.h";
using namespace std;

//============ Height Of the Binary Tree===========
int height(BinaryTreeNode<int>* root){
	if(root == nullptr) return 0;
	return max(height(root->left), height(root->right))+1;
}

//================ Nodes at Distance K ==============
void printAtK(BinaryTreeNode<int>* root, int k){
	if(root == nullptr) return;
	if(k == 0){
		cout<<root->data <<" ";
	}
	else{
		printAtK(root->left, k-1);
		printAtK(root->right, k-1);
	}
}

//=============== Level Order Traversal ==============

void levelOrder(BinaryTreeNode<int>* node){
	if(node == nullptr) return;
	queue<BinaryTreeNode<int>*> pending;
	pending.push(node);

	while(pending.size() != 0){
		BinaryTreeNode<int>* front = pending.front();
		pending.pop();
		cout<<front->data;
		
	}

}

//==========Size of Binary Tree============
int sizeOfBT(BinaryTreeNode<int>* node){
	if(node == nullptr) return 0;
	return 1 + sizeOfBT(node->left)+sizeOfBT(node->right);
}

//=========Binary search===========
int bs(int arr[], int k, int size){

	int start =0; 
	int end = size-1;
	int mid = start + (end - start)/2;
	while(start <= end){
		if(arr[mid] == k) return mid;
		if(k > arr[mid]){
			start = mid + 1;
		}
		else if(k < arr[mid]){
			end = mid - 1; 
		}

		mid = start + (end - start)/2;
	}

	return -1;
}

// ===========Left view=============
int maxlvl = 0;
void leftViewHelp(BinaryTreeNode<int>*node, int lvl){
	if(node == nullptr) return;
	if(maxlvl < lvl){
		cout<<node->data<<" ";
		maxlvl = lvl;

	}
	leftViewHelp(node->left, lvl+1);
	leftViewHelp(node->right, lvl+1);
}

//==========Children sum property=============
bool chiSum(BinaryTreeNode<int>* root){
	if(root == nullptr) return true;

	if(root->data == ())
}

int main()
{
// --------------------------------------------
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
// --------------------------------------------





	return 0;
}