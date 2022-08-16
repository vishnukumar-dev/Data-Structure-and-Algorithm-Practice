# include <bits/stdc++.h>
using namespace std;


int fibo_help(int n, int *ans){
    if(n <= 1) return n;

    // check if output is already exists or not
    if(ans[n] != -1) return ans[n];

    int a = fibo_help(n-1, ans);
    int b = fibo_help(n-2, ans);

    // save the output for the future use
    ans[n] = a+b;

    // return the final result
    return ans[n];
}

int fibo(int n){
    int *ans = new int[n+1];
    for(int i=0; i<=n; i++){
        ans[i]==-1;
    }

    return fibo_help(n, ans);
}


int main()
{
    #ifndef ONLINE_JUDGE
        freopen("../input.txt","r",stdin);
        freopen("../output.txt","w",stdout);
    #endif




    return 0;
}