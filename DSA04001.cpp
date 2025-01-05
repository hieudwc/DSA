#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define is insert
ll mod = 1e9 + 7;
ll Spow(ll n, ll k){
    if(k == 0) return 1;
    ll x = Spow(n, k/2);
    if(k % 2 == 0) return (x * x) % mod;
    else return (((x * x ) % mod)* n) % mod;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        ll n, k;
        cin >> n >> k;
        cout << Spow(n, k) << endl;
    }
}