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
        int k;
        cin >> k;
        string s;
        cin >> s;
        ll n = 0;
        map<char, int> mp;
        for(int i = 0; i < s.size(); i++)
            mp[s[i]]++;
        priority_queue<int> q;
        for(auto i : mp)   
            q.push(i.second);
        while(k--){
            int x = q.top();
            q.pop();
            x--;
            q.push(x);
        }
        while(q.size()){
            n += (ll)q.top() * q.top();
            q.pop();
        }
        cout << n << endl;
    }
}