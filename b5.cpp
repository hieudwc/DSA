#include<bits/stdc++.h>
using namespace std;

#define ll long long

int n;
vector<string> v;
int check(string s){
    map<char, int > mp;
    for(char x:s) mp[x]++;
    if(s.size() % 2 == 0) return mp['2'] > s.size()/2;
    return mp['2'] >= s.size()/2+1;
}
void solve(){
    queue<string > q;
    int cnt = 0;
    q.push("1");
    q.push("2");
    while(1){
        string s = q.front();
        q.pop();
        if(check(s)) {
            cnt++;
            v.push_back(s);
        }
        if(cnt == n) break;
        q.push(s+"0");
        q.push(s+"1");
        q.push(s+"2");
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        v.clear();

        solve();
        sort(v.begin(),v.end(), [](string x, string v)
 ->int{});    
     for(string x:v) cout << x << " ";
        cout << endl;
    }
}
