# include <iostream>
using namespace std;

int partition(int a[], int si, int ei)
{
    int pivot= a[ei];
    int i=si-1;
    for (int j = si; j < ei; j++ )
    {
        if(a[j]<=pivot)
        {
            i++;
            int temp = a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    
    a[ei]=a[i+1];
    a[i+1]=pivot;

    return(i+1);
}

void quickSort(int a[], int si, int ei)
{
    if(si<ei) 
    {
        int p=partition(a, si, ei);
    quickSort(a, si, p-1);
    quickSort(a, p+1, ei);
    }

}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    int a[5]={50,40,30,20,10};

    quickSort(a, 0, 4);

    for (int i = 0; i < 5; i++)
    {
        cout<<a[i]<<" ";
    }
    




    return 0;
} 