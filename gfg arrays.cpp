# include <iostream>
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int a[6];
    a[3/2]=4;
    cout<<a[1]<<endl;


    return 0;
}