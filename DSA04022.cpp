#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define is insert
#define all(x) (x).begin(), (x).end()
int f[26];
int Try(int n, int k){
    if(k == f[n]) {
        return n;
    }
    else if(k > f[n]) return Try(n-1, k - f[n]);
    else return Try(n-1, k);
}
int main(){
    int t; 
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        for(int i = 1; i <= n; i++){
            f[i] = pow(2,i-1);
        }
        int x = Try(n,k);
        for(int i = 0; i < 26; i++){
            if(x == i + 1) cout << (char)('A' + (char)i) << endl;
        }
    }
}