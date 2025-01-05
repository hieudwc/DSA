#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define is insert
#define all(x) (x).begin(), (x).end()
ll mod = 1e9+7;
ll a, b;
ll Spow(ll a, ll b){
    if(b == 0) return 1;
    ll x = Spow(a, b/2);
    if(b % 2 == 0) return (x*x) % mod;
    else return ((x*x)%mod)*a%mod;
}
int main(){
    while(1){
    cin >> a >> b;
    if(a == 0 && b == 0) break;
    cout << Spow(a, b) << endl;
    }
}