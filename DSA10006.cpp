#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define is insert
#define all(x) (x).begin(), (x).end()
ll mod = 1e9 + 7;

int n, m, u;
vector<int> adj[1005];
int visited[1005];
vector<pair<int, int>> res;

void DFS(int i){
    visited[i] = 1;
    for(int v : adj[i]){
        if(!visited[v]){
            res.pb({i, v});
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
        int cnt = 0;
        for(int i = 1; i <= n; i++){
            if(visited[i]) cnt++;
        }
        if(cnt == n){
        for(auto i : res) 
        cout << i.first << ' ' << i.second << endl;
        }
        else cout << -1 << endl;
        res.clear();
        memset(visited, 0, sizeof(visited));
        for(int i = 1; i <= n; i++) adj[i].clear();
    }
}