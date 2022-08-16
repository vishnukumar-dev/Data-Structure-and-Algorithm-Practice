# include <bits/stdc++.h>
# include "2.3 ll class.cpp"
using namespace std;

void print(Node * head){
    Node * temp = head;
    while (temp != nullptr)
    {
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"nullptr";
    
    
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    Node n1(10);
    Node n2(20);
    Node n3(30);
    Node n4(40);
    Node n5(50);

    Node * head = &n1;
    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;

    print(head);
    
    


    return 0;
}