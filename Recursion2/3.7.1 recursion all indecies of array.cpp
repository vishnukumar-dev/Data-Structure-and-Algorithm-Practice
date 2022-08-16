# include <iostream>
using namespace std;

int all_indecies(int a[], int size, int x,int o[])
{
    if(size ==0) return-1;
    if(a[0]==x) return 0;

    int smalloutput = all_indecies(a+1, size-1, x);
    if(smalloutput==-1) return -1;
    else if(size!=0)
        {
            o[0]=smalloutput;
            o=o+1;
            return o;
        }
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("output.txt","w",stdout);
    #endif

    int a[5]={10,20,30,10,40};
    int o[5];
    int p=all_indecies(a,5,10,o);
    




    return 0;
}