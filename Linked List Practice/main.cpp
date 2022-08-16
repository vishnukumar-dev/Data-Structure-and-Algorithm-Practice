# include <bits/stdc++.h>
# include "node.cpp"
using namespace std;

// Print the LL
void print(Node*p){
    Node* temp = p;
    cout<<"Head <--";
    while(temp != nullptr)
    {
        cout<<temp->data<<" <--";
        temp=temp->next;
    }
    cout<<"Null";
}

// length of linked list recursively
int lengthLL(Node*h)
{
    if(h == nullptr) return 0;
    return 1+lengthLL(h=h->next);
}

// inseting a node in LL Recursively
Node* inesrting(Node* h, int n, int data){
    if(n < 0 || h == nullptr) return h;
    if(n == 0){
        Node *newnode = new Node(data);
        newnode->next = h;
        return newnode;
    }

    Node* x = inesrting(h->next, n-1, data);
    h->next= x;
    return h;
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    Node n1(10);
    Node* head = &n1;
    Node n2(20);
    Node n3(30);

    head->next=&n2;
    n2.next=&n3;

    print(head);

    // cout<<endl<<lengthLL(head);

    Node* x = inesrting(head,2,25);
    cout<<endl;
    print(x);

    return 0;
}