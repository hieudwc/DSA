#include<bits/stdc++.h>
using namespace std;

vector<int> bfs(vector<vector<int>> edges, int u, int v){
    queue<int> q;
    q.push(u);
    vector<bool> visited(edges.size(),false);
    vector<int> parent(edges.size(),-1);
    visited[u] = true;
    while(!q.empty()){
        int vecrice = q.front();
        q.pop();
        for(int i=0; i<edges[vecrice].size();i++){
            if(!visited[edges[vecrice][i]]){
                q.push(edges[vecrice][i]);
                visited[edges[vecrice][i]] = true;
                parent[edges[vecrice][i]] = vecrice;
            }
        }
    }
    return parent;
}

void print(vector<int> ve, int u, int v){
    if(u==v){
        cout<<u<<" ";
        return;
    }
    if(ve[v]==-1){
        cout<<ve[v]<<" ";
        return;
    }
    print(ve,u,ve[v]);
    cout<<v<<" ";
}

int main(){
    int t; cin>>t;
    while(t--){
        int V,E,u,v;
        cin>>V>>E>>u>>v;
        vector<vector<int>> edges(E);
        for(int i=0; i<E; i++){
            int a,b;
            cin>>a>>b;
            edges[a].push_back(b);
        }
        vector<int> parent = bfs(edges,u,v);
        print(parent,u,v);
        cout<<endl;
    }
}