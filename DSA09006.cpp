#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define is insert
#define all(x) (x).begin(), (x).end()
ll mod = 1e9 + 7;

int n, m, s, t;
vector<int> adj[1005];
int visited[1005];
int parent[1005];

void DFS(int u){
    visited[u] = 1;
    for(int v : adj[u]){
        if(!visited[v]){
            parent[v] = u;
            DFS(v);
        }
    }
}
int main(){
    int test;
    cin >> test;
    while(test--){
        cin >> n >> m >> s >> t;
        for(int i = 0; i < m; i++){
            int x, y;
            cin >> x >> y;
            adj[x].pb(y);
            adj[y].pb(x);
        }
        DFS(s);
        if(parent[t] == 0){
            cout << -1 << endl;
        }
        else{
            vector<int> res;
            while(t != s){
                res.pb(t);
                t = parent[t];
            }
            res.pb(s);
            reverse(res.begin(), res.end());
            for(int i : res) cout << i << ' ';
            cout << endl;
        }
        memset(visited, 0, sizeof(visited));
        memset(parent, 0, sizeof(parent));
        for(int i = 1; i <= n; i++){
            adj[i].clear();
        }
    }
}
