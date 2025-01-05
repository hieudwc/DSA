#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define is insert

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n, K;
        cin >> n >> K;
        int a[n];
        map<int, ll> m;
        ll ans = 0;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            m[a[i]]++;
        }
        for(auto i : m){
            if(i.first * 2 == K)
                ans += i.second * (i.second - 1);
            else
                ans += i.second * m[K-i.first];
        }
        cout << ans/2 << endl;
    }
}