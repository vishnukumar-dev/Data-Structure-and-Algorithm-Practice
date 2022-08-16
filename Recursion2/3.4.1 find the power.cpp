# include <iostream>
using namespace std;

int power(int x, int n)
{
    if(x==0) return 0;
    else if(n==0) return 1;

    int smalloutput = power(x, n-1);
    return x*smalloutput;

}
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif


    int x,n,out;
    cin>>x>>n;
    out=power(x, n);
    cout<<out;
    


    return 0;
}