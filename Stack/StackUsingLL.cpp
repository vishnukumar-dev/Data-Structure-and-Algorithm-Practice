template <typename T>
class Node{
    public:
    T data;
    Node<T>* next;

    Node(T data)
    {
        this->data = data;
        next = nullptr;
    }

};

template <typename T>
class Stack{
    private:
        Node<T>* head;
        int size;

    public:
        Stack()
        {
            head=nullptr;
            size=0;
        }

        int getSize()
        {
            return size;
        }

        bool isEmpty()
        {
            return size == 0;
        }

        void push(T x)
        {
            Node<T> *newNode = new Node<T>(x);
            newNode->next = head;
            head = newNode; 
            size++   ;    
        }
        T pop()
        {
            if(isEmpty()) return 0;
            Node<T>* del = head;
            T deleted = head->data;
            head = head->next;
            delete del;
            size--;
            return deleted;    
        }

        T top()
        {
            if(isEmpty())return 0;
            return head->data;
        }


};