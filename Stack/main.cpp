# include <bits/stdc++.h>
// # include "StackUsingArray.cpp"
// # include "dynamicStack.cpp"
// # include "StackUsingTemplate.cpp"
// # include "StackUsingLL.cpp"
// # include <StackUsingArray.h>
# include <stack>
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    stack<char> s1;
    s1.push('A');
    s1.push('b');
    s1.push('c');
    s1.push('d');
    cout<<endl;
    cout<<s1.top()<<" ";
    cout<<s1.top()<<" ";
    cout<<s1.top()<<" ";
    cout<<endl;
    cout<<s1.empty()<<endl;
    cout<<s1.top()<<endl;
    cout<<s1.size()<<endl;

    s1.pop();
    // cout<<s1.pop();
    cout<<endl;
    
    cout<<s1.top()<<" ";
    cout<<s1.top()<<" ";
    cout<<s1.top()<<" ";
    cout<<endl;
    cout<<s1.empty()<<endl;
    cout<<s1.top()<<endl;
    cout<<s1.size()<<endl;
    

    


    return 0;
}