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

void DFS(int u, int k){
    for(int v : adj[u]){
        if(visited[v]) continue;
        if(k == n){
            ok = 1;
            return;
        }
        else{
            if(!visited[v]){
                visited[v] = 1;
                DFS(v, k + 1);
                visited[v] = 0;
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
            adj[x].pb(y);
            adj[y].pb(x);
        }
        for(int i = 1; i <= n; i++){
            DFS(i, 1);
            memset(visited, 0, sizeof(visited));
        }
        if(ok) cout << 1 << endl;
        else cout << 0 << endl;
        ok = 0;
        for(int i = 1; i <= n; i++) adj[i].clear();
    }
}
