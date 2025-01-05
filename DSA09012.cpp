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

void DFS(int u){
    visited[u] = 1;
    for(int v : adj[u]){
        if(!visited[v]) DFS(v);
    }
}
void DinhTru(){
    int tplt = 0;
    for(int i = 1; i <= n; i++){
        if(!visited[i]){
            tplt++;
            DFS(i);
        }
    }
    for(int i = 1; i <= n; i++){
        int dem = 0;
        memset(visited, 0, sizeof(visited));
        visited[i] = 1;
        for(int j = 1; j <= n; j++){
            if(!visited[j]){
                dem++;
                DFS(j);
            }
        }
        if(dem > tplt) cout << i << ' ';
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
        DinhTru();
        cout << endl;
        memset(visited, 0, sizeof(visited));
        for(int i = 1; i <= n; i++){
            adj[i].clear();
        }
    }
}