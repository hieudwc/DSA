#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define is insert
#define all(x) (x).begin(), (x).end()
ll mod = 1e9 + 7;

int n, m;
vector<int> adj[1005];
int parent[1005];
int visited[1005];
int ok = 0;
void DFS(int u){
    visited[u] = 1;
    for(int v : adj[u]){
        if(!visited[v]){
            parent[v] = u;
            DFS(v);
        }
        else{
            if(v != parent[u]){
             ok = 1;
            return;
            }
        }
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n >> m;
        int cnt = 0;
        for(int i = 0; i < m; i++){
            int x, y;
            cin >> x >> y;
            adj[x].pb(y);
            adj[y].pb(x);
        }
        for(int i = 1; i <= n; i++){
            if(!visited[i] && !ok){
                DFS(i);
            }
        }
        if(ok) cout << "YES" << endl;
        else cout << "NO" << endl;
        ok = 0;
        for(int i = 1; i <= n; i++) adj[i].clear();
        memset(visited, 0, sizeof(visited));
        memset(parent, 0, sizeof(parent));
    }
}