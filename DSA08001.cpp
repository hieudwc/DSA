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
        queue<int> q;
        int k;
        cin >> k;
        while(k--){
        int n;
        cin >> n;
        if(n == 1) cout << q.size() << endl;
        else if(n == 2){
            if(q.empty()) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
        else if(n == 3){
            int x;
            cin >> x;
            q.push(x);
        }
        else if(n == 4){
            if(!q.empty()) q.pop();
        }
        else if(n == 5){
            if(!q.empty()) cout << q.front() << endl;
            else cout << -1 << endl;
        }
        else if(n == 6){
            if(!q.empty()) cout << q.back() << endl;
            else cout << -1 << endl;
        }
        }
    }
}