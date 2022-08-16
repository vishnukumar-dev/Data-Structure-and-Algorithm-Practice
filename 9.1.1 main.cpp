# include <iostream>
using namespace std;
# include "8.2.1 linked list class.cpp"

// function to create a linked list
Node* createLinkedList()
{
    int data;
    cin>>data;
    Node* head = nullptr;
    while (data != -1)
    {
        Node* newNode = new Node(data);
        if(head == nullptr)
        {
            head = newNode;
        }
        else
        {
            Node* temp = head;
            while(temp->next  != nullptr)
            {
                temp=temp->next;
            }
            temp->next=newNode;
        }
        cin>>data;
    }
    return head;
}

void print(Node* head)
{
    while(head != nullptr)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}

//find the middle element of linked list
void midNode(Node* head)
{
    Node* slow = head;
    if(slow == nullptr)return;

    Node* fast = head->next;
    if(fast==nullptr)
    {
        cout<<slow->data;
        return;
    }
    bool flag = false;
    while(flag == false)
    {
        if(fast->next == nullptr)
        {
            cout<<slow->data;
            return;
        }

        slow=slow->next;

        if(fast->next->next == nullptr)
        {
            cout<<slow->data;
            return;
        }
        fast=fast->next->next;
    }
}


int main()
{

    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    Node* head = createLinkedList();
    print(head);
    
    cout<<endl<<"----------"<<endl;
    midNode(head);
    cout<<endl<<"----------"<<endl;


    
}