# include <iostream>
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int *p = new int;
    *p = 11;
    cout<<*p<<endl;
    *p=22;
    cout<<*p<<endl;
    (*p)++;
    cout<<*p<<endl;


    return 0;
}