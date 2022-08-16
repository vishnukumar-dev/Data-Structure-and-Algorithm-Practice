# include<bits/stdc++.h>
using namespace std;

void  insertionSort(int a[]){
    for( unsigned int i=1; i < sizeof(a);i++){
        int key = a[i];
        int j=i-1;
        while(j>=0){
            if(a[j]>key || a[j]==key)
            {
                a[j+1]=a[j];
            }
            else
            {
                a[j+1]=key;
                break;
            }
            
            j--;
        }
        if(j<0)
        {
            a[0]=key;
        }
    }
    return ;
}

int main(){

    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int n;
    cin>>n;
    int b[n];
    for(int i=0; i<n;i++){
        cin>>b[i];
    }

     insertionSort(b);

    for(int i=0; i<n;i++){
        cout<<b[i]<<" ";
    }
}