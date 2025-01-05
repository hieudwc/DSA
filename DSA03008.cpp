#include <bits/stdc++.h>

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
        int n;
        cin >> n;
        pair<int,int> p[n];
        for(int i = 0; i < n; i++)
            cin >> p[i].second;
        for(int i = 0; i < n; i++)
            cin >> p[i].first;
        sort(p,p+n);
        int ans = 1, k = p[0].first;
        for(int i = 1; i < n; i++){
            if(p[i].second >= k) {
                ans++;
                k=p[i].first;
            }
        }
        cout << ans << endl;
    }
}
