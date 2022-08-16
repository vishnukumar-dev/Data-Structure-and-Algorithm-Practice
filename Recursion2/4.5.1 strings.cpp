# include <iostream>
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    //using string dynamically
    string *sp = new string;
    *sp = "hello";
    cout<<sp<<endl;
    cout<<*sp<<endl;

    // using getline() to avoid termination on space and tab while using cin
    string s="def";
    getline(cin, s);
    cout<<s<<endl;

    // using string like a array
    s="defdef";
    cout <<s[0]<<endl;
    s[0]='a';
    cout <<s[0]<<endl;
    
    string s1;
    s1="def";

    string s2=s+s1;
    cout<<s2<<endl;
    s+=s1;
    cout<<s1<<endl;
    cout<<s<<endl;
    
    cout<<s.size()<<endl;
    cout<<s.substr(3)<<endl;
    cout<<s.substr(3,3)<<endl;
    cout<<s.find("def");



    return 0;
}