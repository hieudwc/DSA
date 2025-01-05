#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define is insert
#define all(x) (x).begin(), (x).end()

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n, k;
        cin >> n >> k;
        ll f[93];
        f[1]=1;
        f[2]=1;
        for(int i = 3; i <= n; i++){
            f[i] = f[i-2] + f[i-1];
        }
        while(n>2){
            if(k <= f[n-2]) n-=2;
            else{
                k -= f[n-2];
                n--;
            }
        }
        if(n == 1) cout << 0 << endl;
        else cout << 1 << endl;
    }
}