#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define is insert
#define all(x) (x).begin(), (x).end()
ll mod = 1e9 + 7;

int main(){
    int c, n;
    cin >> c >> n;
    int a[105];
    for(int i = 1; i <= n; i++)
        cin >> a[i];
    vector<vector<int>> dp(n + 1, vector<int>(c + 1, 0));
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= c; j++){
            if(a[i] <= j){
                dp[i][j] = max(dp[i-1][j-a[i]] + a[i], dp[i-1][j]);
            }
            else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    cout << dp[n][c] << endl;
}