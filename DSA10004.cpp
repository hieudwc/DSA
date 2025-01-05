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

int main(){
    int t;
    cin >> t;
    while(t--){
        int s = 0;
        cin >> n >> m;
        for(int i = 0; i < m; i++){
            int x, y;
            cin >> x >> y;
            adj[x].pb(y);
            adj[y].pb(x);
        }
        for(int i = 1; i <= n; i++){
            if(adj[i].size() % 2 == 0) s++;
        }
        if(s == n) cout << 2;
        else if(s == n - 2) cout << 1;
        else cout << 0;
        for(int i = 1; i <= n; i++){
            adj[i].clear();
        }
        cout << endl;
    }
}