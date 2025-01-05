#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define is insert
ll n, k;
ll f[93];

int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n >> k;
        f[1] = 1;
        f[2] = 1;
        for(int i = 3; i <= n; i++){
            f[i] = f[i-1] + f[i-2];
        }
        while(n>2){
            if(k <= f[n-2]) n -= 2;
            else{
                k -= f[n-2];
                n -= 1;
            }
        }
        if(n == 1) cout << 'A' << endl;
        else cout << 'B' << endl;
    }
}