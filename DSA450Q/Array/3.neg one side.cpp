# include <bits/stdc++.h>
using namespace std;




int main()
{
    #ifndef ONLINE_JUDGE
        freopen("../../input.txt","r",stdin);
        freopen("../../output.txt","w",stdout);
    #endif


    int a[]={2,3,6,2,-1,-3,-5,3,1,-9};

    int j=0; 
    for(int i=0; i< sizeof(a)/sizeof(a[0]); i++){
        if(a[i]<0){
            swap(a[j],a[i]);
            j++;
        }
    }

    for(int i : a){
        cout<<i<<" ";
    }
    return 0;
}