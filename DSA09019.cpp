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
int visited[1005];
int ok = 0;
int parent[1005];

void DFS(int u){
    visited[u] = 1;
    for(int i : adj[u]){
        if(!visited[i]){
            parent[i] = u;
            visited[i] = 1;
            DFS(i);
        }
        else if(parent[u] != i){
            ok = 1;
            return;
        }
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n >> m;
        for(int i = 0; i < m; i++){
            int x, y;
            cin >> x >> y;
            adj[x].pb(y);
            adj[y].pb(x);
        }
        for(int i = 1; i <= n; i++){
            memset(visited, 0, sizeof(visited));
            DFS(i);
        }
        if(ok) cout << "YES" << endl;
        else cout << "NO" << endl;
        ok = 0;
        memset(visited, 0, sizeof(visited));
        for(int i = 1; i <= n; i++) adj[i].clear();
    }
}