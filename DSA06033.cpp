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
        int n;
        cin >> n;
        pair<int,int> a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i].first;
            a[i].second=i;
        }
        sort(a,a+n);
        int ans = -1, min = a[0].second, val = a[0].first;
        for(int i = 1; i < n; i++){
            if(a[i].first>val){
                ans = max(ans, a[i].second-min);
            }
            if(min > a[i].second){
                min = a[i].second;
                val = a[i].first;
            }
        }
        cout << ans << endl;
    }
}