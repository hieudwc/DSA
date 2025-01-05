#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define is insert1
ll mod = 1e9 + 7;
ll Spow(ll n, ll r){
    if(r == 0) return 1;
    ll x = Spow(n, r/2);
    if(r % 2 == 0) return x*x % mod;
    else return (((x*x)%mod)*n)%mod;
}
ll dao(ll n){
    ll tmp = 0;
    while(n){
        tmp = tmp*10 + n%10;
        n/=10;
    }
    return tmp;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        cout << Spow(n,dao(n)) << endl;
    }
}