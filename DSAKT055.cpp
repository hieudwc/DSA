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
        int n, s;
        cin >> n >> s;
        int a[n+1], c[n+1];
        int dp[n+1][s+1];
        memset(dp, 0, sizeof(dp));
        for(int i = 1; i <= n; i++)
            cin >> a[i];
        for(int i = 1; i <= n; i++)
            cin >> c[i];
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= s; j++){
                if(a[i] <= j){
                    dp[i][j] = max(dp[i-1][j], dp[i-1][j-a[i]]+c[i]);
                }
                else{
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
        cout << dp[n][s] << endl;
    }
}