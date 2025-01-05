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
        int n, x;
        cin >> n >> x;
        vector<ll> v;
        for(int i = 0; i < n; i++){
            ll a; cin >> a;
            v.pb(a);
        }
        int idx = lower_bound(v.begin(),v.end(),x)-v.begin();
        if(v[idx] != x) idx--;
        if(idx > 0) cout << idx + 1 << endl;
        else cout << -1 << endl;
    }
}