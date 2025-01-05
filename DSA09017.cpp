#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define is insert
#define all(x) (x).begin(), (x).end()
ll mod = 1e9 + 7;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        set<int> s;
        for(int i = 0; i < n - 1; i++){
            int x, y;
            cin >> x >> y;
            s.insert(x);
            s.insert(y);
        }
        if(s.size() != n) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
}