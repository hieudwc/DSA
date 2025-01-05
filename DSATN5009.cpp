#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define is insert
#define all(x) (x).begin(), (x).end()
ll mod = 1e9 + 7;

int n, m;
set<int> adj[1005];
int visited[1005];
int parent[1005];
int ok = 0;
vector<int> res;
void DFS(int u){
    visited[u] = 1;
    for(int v : adj[u]){
        if(!visited[v]&& !ok){
            parent[v] = u;
            res.pb(v);
            if(!ok)DFS(v);
        }
        else{
            if(v != parent[u] && !ok){
                res.pb(v);
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
        for(int i = 0; i < m; i++){
            int x, y;
            cin >> x >> y;
            adj[x].is(y);
            adj[y].is(x);
        }
        res.pb(1);
        DFS(1);
        if(ok){
            for(int i : res) cout << i << ' ';
            cout << endl;
        }   
        else cout << "NO" << endl;
        memset(visited, 0, sizeof(visited));
        memset(parent, 0, sizeof(parent));
        res.clear();
        for(int i = 1; i <= n; i++){
            while(adj[i].size()){
                adj[i].erase(adj[i].begin());
            }
        }
    }
}