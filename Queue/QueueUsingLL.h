using namespace std;

template<typename T>
class Node
{
    public:
        T data;
        Node<T>*next;

        Node(T data)
        {
            this->data=data;
            next=nullptr;
        }
        
};


template<typename T>
class Queue
{
    private:
    Node<T>*head;
    Node<T>*tail;
    int size;

    public:
    Queue()
    {
        head=nullptr;
        tail=nullptr;
        size=0;
    }

    int getSize()
    {
        return size;
    }

    bool isEmpty()
    {
        return size==0;
    }

    void enqueue(T x)
    {
        if(head==nullptr)
        {
            head=new Node<T>(x);
            tail=head;
        }
        else{
            tail->next=new Node<T>(x);
            tail = tail->next;
        }
        size++;
    }

    T front()
    {
        if(head==nullptr) return 0;
        return head->data;
    }

    T dequeue()
    {
        if(head==nullptr) return 0;
        Node<T>* del = head;
        T x = del->data;
        head=head->next;
        delete del;
        size--;
        return x;
    }

};