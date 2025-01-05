#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define is insert
ll n, k;
ll f[51];
ll Try(ll n, ll k){
    if(k == f[n]){
        return n;
    }
    if(k > f[n]){
       return Try(n-1, k - f[n]);
    }
    else{
        return Try(n-1, k);
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        ll n, k;
        cin >> n >> k;
        f[0]=0;
        for(int i = 1; i <= n; i++){
            f[i] = pow(2,i-1);
        }
        cout << Try(n, k) << endl;
    }
}