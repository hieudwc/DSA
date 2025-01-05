#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define is insert
#define all(x) (x).begin(), (x).end()
ll mod = 1e9 + 7;

vector<int> adj[1005];
int visited[1005];
int n, m, u;

void BFS(int u){
    queue<int > q;
    q.push(u);
    visited[u] = 1;
    while(q.size()){
        int v = q.front();
        q.pop();
        cout << v << ' ';
        for(int i : adj[v]){
            if(!visited[i]){
                visited[i] = 1;
                q.push(i);  
            }
        }
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n ;
        for(int i = 0; i < m; i++){
            int x;
            cin >> x;
            adj[x].pb(y);
            adj[y].pb(x);
        }
        BFS(u);
        memset(visited, 0, sizeof(visited));
        for(int i = 0; i < 1005; i++){
            adj[i].clear();
        }
        cout << endl;
    }
}