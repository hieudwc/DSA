#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define is insert
#define all(x) (x).begin(), (x).end()
ll mod = 1e9 + 7;
bool check(string s){
    for(int i = 0; i < s.size(); i++){
        if(s[i] != '8') return false;
    }
    return true;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        queue<string > q;
        q.push("6");
        q.push("8");
        vector<string> v;
        v.pb("6");
        v.pb("8");
        while(q.size()){
            string x = q.front();
            q.pop();
            string tmp = x + "6";
            v.pb(tmp);
            q.push(tmp);
            string tmp2 = x + "8";
            v.pb(tmp2);
            q.push(tmp2);
            if(tmp2.size() == n && check(tmp2)) break;
        }
        cout << v.size() << endl;
        for(int i = 0; i < v.size(); i++) 
            cout << v[i] << " ";
        cout << endl;
    }
}