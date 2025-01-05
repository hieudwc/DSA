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
        int n, s;
        cin >> n >> s;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        int d[s+1];
        d[0] = 1;
        for(int i = 1; i <= s; i++) d[i] = 0;
        for(int i = 0; i < n; i++){
            for(int j = s; j >= a[i]; j--){
                if(d[j - a[i]] == 1){
                    d[j] = 1;
                }
            }
        }
        if(d[s]) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}