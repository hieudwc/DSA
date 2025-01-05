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
        int ans = 0, mod = 1e9 + 7;
        priority_queue<int, vector<int>, greater<int>> q;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            q.push(x);
        }
        while(q.size()>1){
            int s1 = q.top();
            q.pop();
            int s2 = q.top();
            q.pop();
            int tmp = (s1 + s2) % mod;
            ans = (ans+tmp) % mod;
            q.push(tmp);
        }
        cout << ans << endl;
    }
}