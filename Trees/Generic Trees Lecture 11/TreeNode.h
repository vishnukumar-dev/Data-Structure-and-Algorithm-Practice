//file to create the treenodes 

#include <vector>
using namespace std;

template<typename T>
class TreeNode{
    public:
    T data;
    vector<TreeNode<T>*>children;   //vecor<TreeNode*>children;  both will work

    TreeNode(T data){
        this->data = data;
        
    } 

    ~TreeNode(){
        for(int i=0; i<children.size(); i++){
            delete children[i];
        }
    }
};