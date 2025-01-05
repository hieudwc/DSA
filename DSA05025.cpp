#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define is insert
#define all(x) (x).begin(), (x).end()
ll mod = 1e9 + 7;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        ll dp[n+1] = {0};
        dp[0] = dp[1] = 1;
        for(int i = 2; i <= n; i++){
            for(int j = 1; j <= min(i,3); j++){
                dp[i] += dp[i-j];
            }
        }
        cout << dp[n] << endl;
    }
}