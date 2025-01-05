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
        multiset<int> s;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            s.is(x);
        }
        ll ans = 0;
        while(s.size()>1){
            ll tmp = 0;
            auto it = s.begin();
            tmp+=*it;
            it++;
            tmp+=*it;
            ans+=tmp;
            s.erase(s.begin());
            s.erase(s.begin());
            s.is(tmp);
        }
        cout << ans << endl;
    }
}