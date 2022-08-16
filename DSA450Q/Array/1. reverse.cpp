# include <bits/stdc++.h>
using namespace std;

int * reverse(int * arr, int size){
    int start = 0;
    int end = size-1;
    while(start < end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }

    return arr;
}


int main()
{
    #ifndef ONLINE_JUDGE
        freopen("../../input.txt","r",stdin);
        freopen("../../output.txt","w",stdout);
    #endif

    int arr[]={5,4,3,2,1};
    for(auto i : arr){
        cout<<i<<" ";
    }
    cout<<"\n";
    int * a = reverse(arr,5);
    for(auto i : arr){
        cout<<i<<" ";
    }



    


    return 0;
}