# include <bits/stdc++.h>
using namespace std;

const int N = 1e5+10;
vector<int>g[N];

bool vis[N];

bool dfs(int vertex, int par){

// take action on the vertex after entering the vertex
    
    vis[vertex]=true;
    bool isLoopExists = false;
    for(int child : g[vertex]){

        if(vis[child] && child == par) continue;        
        if(vis[child] ) return true;
        
        //Take action on child before entering the child node 

        isLoopExists |= dfs(child, vertex);
        
        //Take action on child aftering exiting the child node

    }

    // Take action on vertex before exiting the vertex
    return isLoopExists;
}


int main()
{
    #ifndef ONLINE_JUDGE
        freopen("../input.txt","r",stdin);
        freopen("../output.txt","w",stdout);
    #endif

    int n, e;
    cin>>n>>e;

    for(int i=0; i<=e; i++){
        int x,y;
        cin>>x>>y;

        g[x].push_back(y);
        g[y].push_back(x);
    }

    bool isLoopExist = false;
    for(int i=0; i<=n; i++){
        if(vis[i])continue;
        if(dfs(i,0)){
            isLoopExist = true;
            break;
        }
    }

    cout<<isLoopExist<<endl;


    return 0;
}