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
        int n, m;
        cin >> n >> m;
        vector<int> v[1000];
        for(int i = 0; i < m; i++){
            int x, y;
            cin >> x >> y;
            v[x].pb(y);
        }
        for(int i = 1; i <= n; i++){
            cout << i << ": ";
            for(int j : v[i])
            cout << j << " ";
            cout << endl;
        }
    }
}