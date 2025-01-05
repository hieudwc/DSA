#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define is insert

int main(){
    int t;
    cin >> t;
    while(t--){
    int n, m, k;
    cin >> n >> m >> k;
    int a[n], b[m], c[k];
    for(int i = 0; i < n; i++)
    cin >> a[i];
    for(int i = 0; i < m; i++)
    cin >> b[i];
    for(int i = 0; i < k; i++)
    cin >> c[i];
    vector<int> v;
    int x = 0, y = 0, z = 0;
    while(x < n && y < m && z < k){
        if(a[x] == b[y] && b[y] == c[z]){
            v.pb(a[x]);
            x++;
            y++;
            z++;
        }
        else if(a[x] < b[y]) 
            x++;
        else if(b[y] < c[z])
            y++;
        else 
            z++;
    }
    if(v.size() == 0) cout << "NO" << endl;
    else {
        for(int i = 0; i < v.size(); i++){
            cout << v[i] << ' ';
        }
        cout << endl;
    }
    }
}