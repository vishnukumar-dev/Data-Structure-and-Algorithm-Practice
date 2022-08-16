# include <bits/stdc++.h>
// # include "QueueUsingArray.h"
// # include "DynamicQueueUsingArray.h"
// # include "QueueUsingLL.h"

# include <queue>


using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

     queue<int> q;
    // q.enqueue(10);     
    // q.enqueue(40);
    // q.enqueue(40);
    // q.enqueue(40);
    // q.enqueue(2);
    // q.enqueue(2);
    // q.enqueue(20);
    // cout<<q.dequeue()<<endl;
    // cout<<q.dequeue()<<endl;
    // cout<<q.front()<<endl;
    // cout<<q.getSize()<<endl;
    // cout<<q.isEmpty()<<endl;

    q.push(10);   
    q.push(20);   
    q.push(30);   
    q.push(40);   
    q.push(50);
    cout<<q.size()<<endl;;
    q.pop();   
    cout<<q.size()<<endl;;


    return 0;
}