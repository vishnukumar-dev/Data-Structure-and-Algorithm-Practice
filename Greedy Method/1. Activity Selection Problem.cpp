# include <bits/stdc++.h>
using namespace std;


bool cmp(pair<int , int>a, pair<int, int>b){
    return (a.second < b.second);
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("../input.txt","r",stdin);
        freopen("../output.txt","w",stdout);
    #endif

    vector<pair<int,int>> vp;

    int n;
    cin>>n;
    for(int i = 0 ; i < n; i++){
        int x, y;
        cin>>x>>y;
        vp.push_back({x,y});
    }

    //sorting 
    sort(vp.begin(), vp.end(), cmp);
    
    //logic
    int prev = 0;
    int res = 1;
    for(int i = 1; i < n; i++){
        if(vp[i].first >= vp[prev].second){
            res++;
            prev = i;
        }
    }
    cout<<res;
    return 0;
}