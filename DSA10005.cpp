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
vector<int> adj2[1005];
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n >> m;
        int cnt = 0;
        for(int i = 0; i < m; i++){
            int x, y;
            cin >> x >> y;
            adj[x].pb(y);
            adj2[y].pb(x);
        }
        int ok = 1;
        for(int i = 1; i <= n; i++){
            if(adj[i].size() != adj2[i].size()){
                ok = 0; 
                break;
            }
        }
        if(ok) cout << 1 << endl;
        else cout << 0 << endl;
        for(int i = 1; i <= n; i++){
            adj[i].clear();
            adj2[i].clear();
        }
    }
}