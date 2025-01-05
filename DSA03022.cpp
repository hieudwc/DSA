#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define is insert

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<ll> v;
    for(int i = 0; i < n; i++){
        ll x; cin >> x;
        v.pb(x);
    }
    sort(v.begin(), v.end());
    n = v.size();
    ll ans = (v[0] * v[1], max(v[0] * v[1] * v[n - 1],max(v[n - 1] * v[n - 2],v[n - 1] * v[n - 2] * v[n - 3])));
    if(ans > 0) cout << ans << endl;
    else cout << 0 << endl;
}