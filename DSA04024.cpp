#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define is insert
#define all(x) (x).begin(), (x).end()
ll mod = 1e9+7;
ll n, k;
ll a[10][10], b[10][10];
void mul(ll x[10][10], ll y[10][10]){
    ll tmp[10][10];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            ll res = 0;
            for(int k = 0; k < n; k++){
                res += (x[i][k]*y[k][j])%mod;
                res%=mod;
            }
            tmp[i][j] = res;
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            a[i][j] = tmp[i][j];
        }
    }
}
void Pow(ll a[10][10], ll k){
    if(k <= 1){
        return;
    }
    Pow(a, k/2);
    mul(a, a);
    if(k%2 == 1){
        mul(a, b);
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
    cin >> n >> k;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
            b[i][j] = a[i][j];
        }
    }
    Pow(a, k);
    ll ans = 0;
    for(int i = 0; i < n; i++){
        ans += a[i][n-1];
        ans %= mod;
    }
    cout << ans << endl;
    }
}