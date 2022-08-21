# include <bits/stdc++.h>
using namespace std;

// cyclically roate the array by k
int * rotateCyclically(int a[], int n, int k){
    int start = 0;
    int end = n-k-1;
    for(start; start<end; start++, end--){
        swap(a[start], a[end]);
    }

    start = n-k;
    end = n-1;
    for(start; start<end; start++, end--){
        swap(a[start], a[end]);
    }

    start = 0;
    end = n-1;
    for(start; start<end; start++, end--){
        swap(a[start], a[end]);
    }

    return a;
}

int main()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt","r",stdin);
    //     freopen("output.txt","w",stdout);
    // #endif

    int a[]={1,2,3,4,5,6,7,8};

    int *b;

    b = rotateCyclically(a,8,2);

    for(int i=0; i<8; i++){
        cout<<b[i]<<" , ";
    }


    return 0;
}