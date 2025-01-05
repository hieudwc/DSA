#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define is insert
ll mod = 123456789;
ll Spow(ll a, ll b){
    if(b == 0) return 1;
    ll x = Spow(a, b/2);
    if(b % 2 == 0) return x*x % mod;
    else return (((x*x)%mod)*a)%mod;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        cout << Spow(2, n - 1) << endl;
    }
}

