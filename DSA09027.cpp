#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define is insert
#define all(x) (x).begin(), (x).end()
ll mod = 1e9 + 7;

int n, m, a, b;
vector<int> adj[1005];
int visited[1005];
int ok = 0;

void BFS(int u){
    queue<int> q;
    q.push(u);
    visited[u] = 1;
    while(q.size()){
        int x = q.front();
        q.pop();
        if(x == b){
            ok = 1;
            return;
        }
        for(int i : adj[x]){
            if(!visited[i]){
                q.push(i);
                visited[i] = 1;
            }
        }
    }
}
void check(int c, int b){
    BFS(a);
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
            adj[x].pb(y);
            adj[y].pb(x);
        }
        int k;
        cin >> k;
        while(k--){
            cin >> a >> b;
            check(a, b);
            memset(visited, 0, sizeof(visited));
            ok = 0;
        }
        for(int i = 1; i <= m; i++){
            adj[i].clear();
        }
    }
}