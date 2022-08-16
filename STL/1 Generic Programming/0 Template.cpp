#include <bits/stdc++.h>
using namespace std;

// Linear search
template <typename t>
int search(t ar[], int n, t key){
    for(int i=0; i<n; i++){
        if(ar[i] == key){
            return i;
        }
    }

    return n;
}

int main(){
    int a[]={1,2,3,4,56,78};
    cout<<search(a,6,4)<<endl;

    string b[]={"ab","bc","cd"};
    string s= "cd";
    cout<<search(b,3,s);

}