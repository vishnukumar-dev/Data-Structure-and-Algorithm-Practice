# include <iostream>
using namespace std;

int last_index(int a[], int size, int x)
{
    size=size-1;
    if(size<0) return -1;
    if(a[size]==x) return size;
    int smalloutput = last_index(a, size, x);
    return smalloutput;
}



int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int x;
    cin>>x;
    int arr[5]={22,10,20,10,30};
    cout<<last_index(arr,5,x);




    return 0;
}