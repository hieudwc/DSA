#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define is insert
#define all(x) (x).begin(), (x).end()
ll mod = 1e9 + 7;
int d[1005][1005];
int main(){
    for(int i = 0; i <= 1001; i++){
        for(int j = 0; j <= i; j++){
            if(i == j || j == 0) d[i][j] = 1;
            else d[i][j] = d[i-1][j-1] + d[i-1][j];
            d[i][j] %= mod;
        }
    }
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        cout << d[n][k] << endl;
    }
}