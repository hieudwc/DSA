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
vector<pair<int,int>> dsc;

void DFS1(int u){
    visited[u] = 1;
    for(int i : adj[u]){
        if(!visited[i])
        DFS1(i);
    }
}

void DFS2(int u, int s, int t){
    visited[u] = 1;
    for(int i : adj[u]){
        if(u == s && i == t || i == s && u == t) continue;
        if(!visited[i]) DFS2(i, s, t);
    }
}
void CanhCau(){
    int tplt = 0;
    for(int i = 1; i <= n; i++){
        if(!visited[i]){
            tplt++;
            DFS1(i);
        }
    }
    for(auto i : dsc){
        memset(visited, 0, sizeof(visited));
        int s = i.first;
        int t = i.second;
        int dem = 0;
        for(int j = 1; j <= n; j++){
            if(!visited[j]){
                dem++;
                DFS2(j, s, t);    
            }
        }
        if(dem > tplt && s < t) cout << s << ' ' << t << ' ';
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
            dsc.pb({x, y});
        }
        CanhCau();
        memset(visited, 0, sizeof(visited));
        for(int i = 0; i < 1005; i++){
            adj[i].clear();
        }
        dsc.clear();
        cout << endl;
    }
}