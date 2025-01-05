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
        int x;
        cin >> n;
        int ans = 0, d = 0;
        vector<pair<int,int>> vp(n+1);
        int check[n+1] = {};
        for(int i = 1; i <= n; i++){
        cin >> x >> vp[i].second >> vp[i].first;
        }
        sort(vp.begin()+1, vp.end(), greater<pair<int,int>>());
        for(int i = 1; i <= n; i++){
            for(int j = min(n, vp[i].second); j >= 1; j--){
                if(!check[j]){
                    ans+=vp[i].first;
                    d++;
                    check[j]=1;
                    break;
                }
            }
        }
        cout << d << " " << ans << endl;
    }
}