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
vector<int> res;
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
        for(int i = 1; i <= m; i++){
            int x, y;
            cin >> x >> y;
            adj[x].pb(y);
        }
        DFS(s);
        if(parent[t] == 0) cout << -1;
        else {
            res.pb(t);
            int x = parent[t];
            while(x != s){
                res.pb(x);
                x = parent[x];
            }
            res.pb(s);
            reverse(res.begin(), res.end());
            for(int i = 0; i < res.size(); i++) cout << res[i] << ' ';
        }
        res.clear();
        cout << endl;
        memset(parent, 0, sizeof(parent));
        memset(visited, 0, sizeof(visited));
        for(int i = 1; i <= n; i++){
            adj[i].clear();
        }
    }
}