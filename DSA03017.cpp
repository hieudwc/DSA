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
        int k;
        cin >> k;
        string s;
        cin >> s;
        priority_queue<int> q;
        map<char,int> m;
        int ans = 0;
        for(int i = 0; i < s.size(); i++){
            m[s[i]]++;
        }
        for(auto i : m) q.push(i.second);
        while(k--){
            int x = q.top();
            q.pop();
            x--;
            q.push(x);
        }
        while(q.size()){
            ans += q.top()*q.top();
            q.pop();
        }
        cout << ans << endl;
    }
}