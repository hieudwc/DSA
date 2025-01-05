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
int dem(int u){
    DFS(u);
    int cnt = 0;
    for(int i = 1; i <= n; i++){
        if(visited[i]) cnt++;
    }
    return cnt;
}
void kiemtra(){
    int ok = 1;
    for(int i = 1; i <= n; i++){
        int x = dem(i);
        if(x != n){
            ok = 0;
            break;
        }
    }
    if(ok) cout << "YES" << endl;
    else cout << "NO" << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n >> m;
        for(int i = 0; i < m; i++){
            int x, y;
            cin >> x >> y;
            adj[x].pb(y);D
        }
        kiemtra();
        memset(visited, 0, sizeof(visited));
        for(int i = 1; i <= n; i++){
            adj[i].clear();
        }
    }
}