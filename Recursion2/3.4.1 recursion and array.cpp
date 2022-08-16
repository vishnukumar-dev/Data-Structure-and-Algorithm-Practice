# include <iostream>
using namespace std;


bool is_sorted(int ar[], int size)
{
    if(size == 0 || size == 1)
     {
         return true;
     }
    if(ar[0]>ar[1])
    {
        return false;
    }

    bool result = is_sorted(ar + 1, size - 1);
    return result;

}



int main()
{
    
    int arr[]={2,4,3,5,6};
    bool result = is_sorted(arr,5);
    cout<<endl<<result;
}