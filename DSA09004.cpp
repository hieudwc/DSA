#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define is insert
#define all(x) (x).begin(), (x).end()
ll mod = 1e9 + 7;

vector<int> adj[1005];
int visited[1005];
int n, m, u;

void DFS(int u){
    cout << u << ' ';
    visited[u] = 1;
    for(int v : adj[u]){
        if(!visited[v]){
            DFS(v);
        }
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n >> m >> u;
        for(int i = 0; i < m; i++){
            int x, y;
            cin >> x >> y;
            adj[x].pb(y);
            adj[y].pb(x);
        }
        DFS(u);
        memset(visited, 0, sizeof(visited));
        for(int i = 0; i < 1005; i++){
            adj[i].clear();
        }
        cout << endl;
    }
}