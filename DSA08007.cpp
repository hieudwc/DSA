#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define is insert
#define all(x) (x).begin(), (x).end()
ll mod = 1e9 + 7;

string n;
bool check(string s){
    return s.size() < n.size() || s.size() == n.size() && s <= n;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        queue<string >q;
        int cnt = 0;
        q.push("1");
        while(q.size()){
            string s = q.front();
            q.pop();
            cnt++;
            if(check(s + "0")) q.push(s + "0");
            if(check(s + "1")) q.push(s + "1");
        }
        cout << cnt << endl;
    }
}