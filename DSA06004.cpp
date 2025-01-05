#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        int a[n], b[m];
        set<int> s;
        map<int,int> mp;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            mp[a[i]]++;
            s.insert(a[i]);
        }
        for(int i = 0; i < m; i++){
            cin >> b[i];
            mp[b[i]]++;
            s.insert(b[i]);
        }
        for(auto i : s) cout << i << ' ';
        cout << endl;
        for(auto i : mp){
            if(i.second==2) cout << i.first << ' ';
        }
        cout << endl;
    }
}