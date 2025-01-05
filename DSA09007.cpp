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
vector<int> res;
void BFS(int u){
    queue<int> q;
    q.push(u);
    while(q.size()){    
        int x = q.front();
        q.pop();
        visited[x] = 1;
        if(x == t) return;
        for(int v : adj[x]){
            if(!visited[v]){
                parent[v] = x;
                visited[v] = 1;
                q.push(v);
            }
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
            adj[y].pb(x);
        }
        BFS(s);
        if(!visited[t]) cout << -1;
        else{
            int ok = 1;
            res.pb(t);
            int x = parent[t];
            while(x != s){
                if(x == 0){
                    ok = 0;
                    break;
                }
                res.pb(x);
                x = parent[x];
            }
            if(!ok) cout << -1;
            else{
                res.pb(s);
                reverse(res.begin(), res.end());
                for(auto i : res) cout << i << ' ';
            }
        }
        cout << endl;
        res.clear();
        memset(parent, 0, sizeof(parent ));
        memset(visited, 0, sizeof(visited));
        for(int i = 1; i <= n; i++){
            adj[i].clear();
        }
    }
}