# include <bits/stdc++.h>
using namespace std;


// DFS 
void dfs(int ** edges, int n, int sv, bool * visited){
    cout<<sv<<endl;
    visited[sv]=true;

    for(int i=0; i<n; i++){
        if(i == sv)continue;

        if(edges[sv][i] == 1){
            if(visited[i]) continue;
            dfs(edges, n, i, visited);
        }
    }
}

//BFS
void bfs(int** edges, int n, int sv){
    queue<int> pendingVertices;
    bool * visited = new bool[n];
    for(int i=0; i<n; i++){
        visited[i]=false;
    }
    pendingVertices.push(sv);
    visited[sv]=true;
    while (!pendingVertices.empty())
    {
        int currentVertex = pendingVertices.front();
        pendingVertices.pop();
        cout<<currentVertex<<endl;
        for(int i=0; i<n ; i++){
            if(i == currentVertex) continue;

            if( edges[currentVertex][i] == 1 and !visited[i]){
                pendingVertices.push(i);
                visited[i] = true;
            }
        } 
    }
    delete[]visited;
}


int main()
{   
    #ifndef ONLINE_JUDGE
        freopen("../input.txt","r",stdin);
        freopen("../output.txt","w",stdout);
    #endif


    int n;  //no. of vertices
    int e;  //no. of edges 
    cin >>n>>e;
    int ** edges = new int*[n]; //to store all the adges creating 2d array dynamically
     
    for(int i = 0; i < n; i++){
        edges[i] = new int [n];
        for(int j = 0; j < n; j++){
            edges[i][j] = 0;
        }
    }

//taking input from the user
    for(int i=0; i<e; i++){
        int f,s;  // f:first vertex, s:second vertex 
        cin>>f>>s;
        edges[f][s]=1;
        edges[s][f]=1;
    }


    bool * visited = new bool[n];
    for(int i=0; i<n; i++){
        visited[i] = false;
    }

    // dfs(edges, n, 0, visited);
    bfs(edges, n, 0);


    //delete the visited array and edges
    delete [] visited;

    for(int i=0; i<n; i++){
        delete[]edges[i];
    }

    delete[] edges;

    return 0;
} 