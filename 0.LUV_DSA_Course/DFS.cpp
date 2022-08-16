# include <bits/stdc++.h>
using namespace std;

const int N = 1e5+10;
vector<int>g[N];

bool vis[N];

void dfs(int vertex){

// take action on the vertex after entering the vertex
    
    cout<< vertex <<endl;
    vis[vertex]=true;

    for(int child : g[vertex]){
        
        cout<<"par "<<vertex<<", child "<<child<<endl;
        if(vis[child])continue;
        
        //Take action on child before entering the child node 

        dfs(child);
        
        //Take action on child aftering exiting the child node

    }

    // Take action on vertex before exiting the vertex

}


int main()
{
    #ifndef ONLINE_JUDGE
        freopen("../input.txt","r",stdin);
        freopen("../output.txt","w",stdout);
    #endif

    int n, m;
    cin>>n>>m;

    for(int i=0; i<9; i++){
        int v1,v2;
        cin>>v1>>v2;

        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }



    return 0;
}