#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define is insert
#define all(x) (x).begin(), (x).end()
ll mod = 1e9 + 7;

int main(){
    int t;
    cin >> t;
    while(t--){
        vector<int> adj[1000];
        int x, y;
        cin >> x >> y;
        for(int i = 1; i <= y; i++){
            int s, t;
            cin >> s >> t;
            adj[s].pb(t);
            adj[t].pb(s);
        }
        for(int i = 1; i <= x; i++){
            cout << i << ": ";
            for(int j : adj[i]) cout << j << ' ';
            cout << endl;
        }
    }
}