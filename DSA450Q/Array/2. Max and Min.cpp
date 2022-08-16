# include <bits/stdc++.h>
using namespace std;




int main()
{
    #ifndef ONLINE_JUDGE
        freopen("../../input.txt","r",stdin);
        freopen("../../output.txt","w",stdout);
    #endif


    int a[]={5,3,2,4,1,7};

    int mx=INT_MIN, mi=INT_MAX;
    for(int i=0; i<6; i++){
        if(mx < a[i]) mx = a[i];
        if(mi > a[i]) mi = a[i];
    }

    cout<<"Max : "<<mx<<endl<<"Min : "<<mi;


    return 0;
}