// find the frist index of the occurence of given element in the array 
# include <iostream>
using namespace std;

int first_index(int a[], int size, int x)
{
    if(size == 0 )
    return -1;
   
    if(a[0]==x)
    return 0;

    int smalloutput = first_index(a+1, size-1, x);
    if(smalloutput == -1)
        return -1;
    else return (smalloutput+1);

}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("output.txt","w",stdout);
    #endif

    int arr[5]={10,20,30,40,50};
    int result = first_index(arr,5, 20);
    cout<<result;





    return 0;
}