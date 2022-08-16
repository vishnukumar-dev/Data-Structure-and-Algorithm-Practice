# include <bits/stdc++.h>
using namespace std;



int minStep(int n){
    int *ans = new int[n+1];
    
}


    int minStep(int n){
        //base case 
        if(n <= 1) return 0;

        int x = minStep(n-1);
        int y=INT_MAX, z=INT_MAX;
        if(n%2 == 0){
            y = minStep(n/2);
        }
        if(n%3 == 0){
            z = minStep(n/3);
        }

        int ans = min(x, min(y,z))+1;

        return ans;
    }

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("../input.txt","r",stdin);
        freopen("../output.txt","w",stdout);
    #endif

    int ans = minStep(9);
    cout<<ans;




    return 0;
}