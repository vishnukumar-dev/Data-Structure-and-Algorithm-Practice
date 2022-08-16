# include <bits/stdc++.h>
using namespace std;

int fact(int n){
    if(n == 1 || n == 0) return 1;
    int f=fact(n-1)*n;
    return f;
}

void fibo(int n, int a=0, int b=1){
    int c=a+b;
    cout<<c;
    fibo(b,c);

}

void print(int n){
    if(n==0)return;
    cout<<n<<endl;
    print(n-1);
}

int main()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt","r",stdin);
    //     freopen("output.txt","w",stdout);
    // #endif

   
    // int a = 100000;
    // int b =  100000;
    // // long long int c = a*b;
    // long long int c = LLONG_MAX;
    // cout<<c;

    print(5);

    return 0;
}