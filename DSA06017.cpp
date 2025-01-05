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
        int n,m;
        cin >> n >> m;
        int a[n], b[m];
        multiset<int> s;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            s.is(a[i]);
        }
        for(int i = 0; i < m; i++){
            cin >> b[i];
            s.is(b[i]);
        }
        for(auto i : s) cout << i << ' ';
        cout << endl;
    }
}