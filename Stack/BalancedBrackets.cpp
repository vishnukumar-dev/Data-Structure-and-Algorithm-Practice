# include <bits/stdc++.h>
using namespace std;
# include <stack>
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    string s;
    cin>>s;
    cout<<s;
    cout<<endl;
    stack<char> check;

    for(char i:s)
    {
        if(i=='(') check.push(')');
        if(i=='{') check.push('}');
        if(i=='[') check.push(']');
    }

    for(char i:s)
    {
        if(i==')'||i=='}'||i==']')
        {
            cout<<i<<endl;
            if(check.top() == i )
            {
                cout<<"--"<<check.top()<<endl;;
                check.pop();
            }
            else
            {
                cout<<"false";
                return 0;
            }
        }
    }

    if(check.empty())
    {
        cout<<"True";
        return 1;
    }
    else
    {
        cout<<"Hello";
        cout<<"False";
        return 0;
    }
    


    return 0;
}

