# include <iostream>
using namespace std;

void merge(int a[], int si, int mid, int ei)
{
    int i=si;
    int j=mid+1;
    int k=ei;
    int b[ei];
    while (i<=mid && j<=ei)
    {
        if(a[i]<=a[j])
        {
            b[k]=a[i];
            i++; k++;
        }
        else
        {
            b[k]=a[j];
            j++; k++;
        }
    }
    while(j<=ei)
    {
        b[k]=a[j];
        j++;
        k++;
    }
    while(i<=mid)
    {
        b[k]=a[i];
        i++;
        k++;
    }
    for(k=si; k<=ei; k++)
    {
        a[k]=b[k];
    }

}

void mergeSort(int a[], int si, int ei)
{
    if(si>=ei) return;
    int mid=(si+ei)/2;
    mergeSort(a,si,mid);
    mergeSort(a,mid+1,ei);
    merge(a, si, mid, ei);


}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int a[5]={50,40,30,20,10};
    mergeSort(a,0,4);

    for(int i=0; i<5; i++)
    {
        cout<<a[i]<<" ";
    }


    return 0;
}