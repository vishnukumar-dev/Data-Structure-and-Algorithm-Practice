template<typename T>
class BST{
    public:
    T data;
    BST* left;
    BST* right;

    BST(T data){
        this->data = data;
        left = nullptr;
        right = nullptr;
    }

    ~BST(){
        delete left;
        delete right;
    }
};