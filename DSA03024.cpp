#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define is insert
bool tmp(pair<int, int> a, pair<int, int> b){
    return a.second < b.second;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        pair<int, int> p[n];
        for(int i = 0; i < n; i++){
            int a; cin >> a;
            p[i].first = a;
            int b; cin >> b;
            p[i].second = b;
        }
        sort(p,p+n,tmp);
        int k = p[0].second;
        int ans = 1;
        for(int i = 1; i < n; i++){
            if(p[i].first >= k){
                k = p[i].second;
                ans++;
            }
        }
        cout << ans << endl;
    }
}