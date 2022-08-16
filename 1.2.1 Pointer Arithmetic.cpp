# include <iostream>
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int i = 15;
    int *p = &i;
    cout<<*p;
    cout<<endl<<p;

    p = p+4;
    cout<<endl<<p;
    cout<<endl<<*p;




    return 0;
}