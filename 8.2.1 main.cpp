# include <iostream>
using namespace std;
# include "8.2.1 linked list class.cpp"





//function to create the new linked list
// keep asking for new node untill -1 is entered
Node * createLinkedList()
{
    int data;
    cin>>data;
    Node * head = nullptr;
    while(data != -1)
    {
        Node* newNode = new Node(data);
        if(head == nullptr)
        {
            head = newNode;
        }
        else{
            Node * temp = head;
            while(temp->next != nullptr)
            {
                temp = temp->next;
            } 
            temp->next=newNode;
        }

        cin>>data;    
    }

    return head;
}

// function to print the linked list
void print(Node *head)
{
    while(head != nullptr)
    {
        cout<<head->data<<"  ";
        head = head->next;
    }

}


// function to insert the new node at the ith loaction of linked list
Node* insertNode(Node *head, int n, int data)
{   
    Node *temp = head;
    Node * newNoode = new Node(data);

    if(n==0)
    {
        newNoode->next = temp;
        temp = newNoode;
        return temp;
    }
    for(int i=0; i<n-1; i++)
    {
        // if(temp == nullptr)
        // {
        //     cout<<"position not found";  
        //     return head;
        // }
        // else
        // {
        //      temp = temp->next;
        // }
        if(temp != nullptr)
        {
            temp = temp->next;
        }
    }
   if(temp != nullptr)
   {
        newNoode->next = temp->next;
        temp->next = newNoode;
   }
   return head;
}


//function to delete the ith node in a linked list
Node* deleteNode(Node * head, int n)
{
    if(head == nullptr) 
    {    return head;}
    if( n==0)
    {
        Node *delNode = head;
        head = head->next;
        delete delNode;
        return head;
    }    
    Node * temp = head;
    for(int i=0; i<n-1; i++)
    {
        if(temp != nullptr)
        {
            temp = temp->next;
        }
    }
    if(temp->next != nullptr)
    {
        Node * delNode = temp->next;
        temp->next = delNode->next;
        delete delNode;
    }
    return head;
}


// recursively counting the number of nodes
int LLlength(Node* head)
{
    
    if(head==nullptr)
    return 0;
    
    head = head->next;
    
    int smalloutput = LLlength(head);
    smalloutput+=1;

   return smalloutput;

}

// recursively insert the new node at ith position
Node* insertNodeRecursively(Node* head, int n, int data)
{
    if(n < 0)
    {
        return head;
    }
    else if(n==0)
    {
        Node* newNode= new Node(data);
        newNode->next =  head;
        return newNode;
    }

    else if(head == nullptr)
    {
        return head;
    }

    Node * x =  insertNodeRecursively(head->next,n-1,data);
    head->next=x;
    return head; 
}


// delete a node in linked list at ith position
Node* deleteNodeRecursively(Node* head, int n)
{
    if(head == nullptr)
    {return head;}
    if(n==0)
    {
        Node* temp = head->next;
        delete head;
        return temp;
    }
    Node* x = deleteNodeRecursively(head->next, n-1);
    head->next = x;
    return head;
}


// find the position of a node in linked list
// retrun loaction of the node otherwise -1 
int FindNode(Node *head, int value)
{
    int loc=-1;
    if(head==nullptr)
    {return loc;}
    while(head != nullptr)
    {    
        loc++;
        if(head->data == value)
        {
            return loc;
        }
        head=head->next;
    }
    return -1;

}


// Append the last n nodes to the first
Node * appendLastNToFirst(Node* head, int n){
    if(head == nullptr || n <= 0){
        return head;
    }

    int count = LLlength(head) - n;
    Node* appendBack = head;
    for(int i=0; i<count-1; i++){
        head= head->next;
    }
    Node* appendFirst = head->next;
    head->next = nullptr;
    Node* temp = appendFirst;
    while (temp->next !=nullptr)
    {
        temp=temp->next;
    }
    temp->next = appendBack;
    return appendFirst;
    
}


//Eliminate duplicates from LL
Node* eliminateDuplicate(Node* head){
    if(head==nullptr) return head;
    Node*thead = head;
    while(thead->next != nullptr)
    {
        Node* dhead = thead;
        while(dhead->data == dhead->next->data)
        {
            Node*del = dhead->next;
            if(dhead->next->next == nullptr)
            {
                dhead->next=nullptr;
                delete del;
                break;
            }
            else
            {
                dhead->next = dhead->next->next;
                delete del;
            }
            
        }
        if(thead->next == nullptr)
            break;
        thead=thead->next;
    }
    return head;
}


// Printing a linked List in Reverse using Recursion
void reversePrint(Node* head)
{
    if(head == nullptr)
        return ;
    reversePrint(head->next);
    cout<<head->data<<"  ";    
}


// Midpoint of Linked List
int midpoint(Node* head){
    if(head == nullptr) return -1;
    else if(head->next == nullptr) return head->data;

    Node * slow = head;
    Node * fast = head->next;

    while(fast != nullptr && fast->next != nullptr){
        fast = fast->next->next;
        slow = slow->next;
    }

    return slow->data;
}


//  Merging two sorted Linked List

Node* merge(Node* h1, Node* h2){
    Node* fh = nullptr;   // final head
    Node* ft = nullptr;  // final tail

    if(h1 == nullptr){       // checking if any of the LL is empty
        return h2;
    }
    else if(h2 == nullptr){
        return h1;
    }

    while(h1 != nullptr && h2 != nullptr){
        if(fh == nullptr){                       // handling starting of final LL
            if(h1->data <= h2->data){
                fh = h1;
                ft = h1;
                h1=h1->next;
            }
            else{
                fh = h2;
                ft = h2;
                h2 = h2->next;
            }
        }
        else if(h1->data <= h2->data){
            ft->next = h1;
            h1 = h1->next;
            ft=ft->next;
        }
        else{
            ft->next = h2;
            h2 = h2->next;
            ft=ft->next;
        }   
    }

    if(h1 != nullptr){           // Handling Ending of the LL
        ft->next = h1;
    }
    else{
        ft->next = h2;
    }
    
    return fh;
}


// Reverse LL (Recursively)  Log(n*n)

Node* reverseLL(Node* head){
    if(head == nullptr || head->next == nullptr){
        return head;
    } 

    Node * smallOutput = reverseLL(head->next);
    
    Node* temp = smallOutput;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }

    temp->next = head;
    head->next = nullptr;
    return smallOutput;
    
}


// Reverse LL recursively (Improved) log(n)
// making a class which helps us to  return multiple values 
// so that we can avoid loop to reach the end node again & again.

class Pair{           // class to return multiple values
    public :
        Node* head;
        Node* tail;
};

Pair reverseLL2(Node* head){            // function to reverse the LL
    if(head == nullptr || head->next == nullptr){      
        Pair ans;
        ans.head = head;
        ans.tail = head;
        return ans;
    }

    Pair smallAns = reverseLL2(head->next);

    smallAns.tail->next = head;
    head->next = nullptr;

    Pair ans;         // we can't just return the smallAns we have the return with ans
    ans.head = smallAns.head;
    ans.tail = head;
    return ans;                 // this func will return the Pair type object
}

Node* reverseLLBetter(Node* head){       // function to return the head of the reversed LL
    return reverseLL2(head).head;
}


// Reverse LL recursively without using loop and class
// since tail is the next of head so we dont need to maintain 
//the loop or return the multiple values
// Log(n)

Node* reverseLLImproved(Node* head){
    if(head == nullptr || head->next == nullptr){
        return head;
    }

    Node * smallAns = reverseLLImproved(head->next);

    Node* tail = head->next;
    tail->next = head;
    head->next = nullptr;
    return smallAns;
}


// Reverse LL Iteratively
Node * reverseLLIterative(Node * head){
    if(head == nullptr || head->next == nullptr){
        return head;
    }

    Node* previous = nullptr;
    Node* next = nullptr;

    while(head != nullptr){
        next = head->next;
        head->next = previous;
        previous = head;
        head=next;
    }

    return previous;
}


// Even after Odd Nodes but in the arrival order 
Node * evenAfterOdd(Node* head)
{
    if(head == nullptr || head->next == nullptr) return head;

    Node* evenH=nullptr;
    Node* evenT=nullptr;
    Node* oddH=nullptr;
    Node* oddT=nullptr;
    while(head != nullptr)
    {
        if(head->data % 2 == 0)
        {
            if(evenH == nullptr)
            {
                evenH = head;
                evenT = head;
            }
            else
            {
                evenT->next = head;
                evenT = evenT->next;
            }
        }
        else
        {
            if(oddH == nullptr)
            {
                oddH = head;
                oddT = head;
            }
            else
            {
                oddT->next = head;
                oddT = oddT->next;
            }
        }

        head = head->next;
    }

    if(evenT != nullptr) evenT->next = nullptr;
    if(oddT != nullptr) oddT->next = nullptr;

    if(evenH == nullptr) return oddH;
    else if(oddH == nullptr) return evenH;
    
    oddT->next = evenH;
    return oddH;
}

//Delete every N nodes and leave every M nodes
Node * delMN(Node* head,int M, int N){
    if(head == nullptr) return head;
    Node* t1=head;
    Node* t2=nullptr;

    if(M==0 && N!= 0) return nullptr;
    else if(M==0 && N==0) return head;

    while(1){
        for(int c=1; c<M; c++){
            if(t1!=nullptr){
                t1=t1->next;
            }
            else return head;
        }
        t2 = t1->next;
        for(int c=1; c<=N; c++){
            if(t2!=nullptr){
                Node*del =t2;
                t2=t2->next;
                delete del;
            }
            else {
                t1->next =nullptr;
                return head;
            }
        }
        t1->next=t2;
        t1=t1->next;
    }
}


int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    Node * h1 = createLinkedList();
    print(h1);
    int M,N;
    cin>>M>>N;
    cout<<endl<<"M : "<<M<<endl<<"N : "<<N;
    cout<<endl;

    h1 = delMN(h1,M,N);
    print(h1);



    // h1 = evenAfterOdd(h1);
    // print(h1);


    // h1 = reverseLLIterative(h1);
    // print(h1);

    // Node * h2 = createLinkedList();
    // print(h2);
    // cout<<endl<<endl;
    // int n;
    // cin>>n;
    
    // Node* fhead;

    // fhead = merge(h1,h2);
    // // cout<<fhead<<endl;
    // print(fhead);



    // cout<<midpoint(h1);


    // reverseLL(head);


    // head = eliminateDuplicate(head);
    // print(head);


    // head = appendLastNToFirst(head, n);
    // print(head);
    

    // int y=FindNode(head,x);
    // cout<<endl<<y;


    // head = insertNode(head, x, 99);
    // print(head);
    // cout<<endl;
    // int x;
    // cin>>x;
    // head = deleteNode(head, x);
    // print(head);

    // int length=LLlength(head);
    // cout<<endl<<length<<endl;
    // print(head);

   

    // head = insertNodeRecursively(head, x, 88);
    // print(head);
    // cout<<endl;
       
    
    // head = deleteNodeRecursively(head, x);
    // print(head);
    

    // Node n1(10);
    // Node * head = &n1;

    // Node n2(20);
    // Node n3(30);
    // Node n4(40);
    // Node n5(50);

    // n1.next=&n2;  
    // n2.next=&n3;  
    // n3.next=&n4;  
    // n4.next=&n5;  

    // print(head);
    // print(head);

    // Node *n3 = new Node(30);
    // Node * head = n3;

    // Node *n4 = new Node(40);
    // n3->next = n4;



    return 0;
}