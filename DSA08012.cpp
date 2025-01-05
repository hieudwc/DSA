#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define is insert
#define all(x) (x).begin(), (x).end()
ll mod = 1e9 + 7;

bool check(int n){
    string s = to_string(n);
    map<char,int> mp;
    for(int i = 0; i < s.size(); i++){
        mp[s[i]]++;
    }
    for(auto i : mp) {
        if(i.second > 1) return false;
        if(i.first > '5') return false;
    }
    return true;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int dem = 0;
        int l, r;
        cin >> l >> r;
        for(int i = l; i <= r; i++){
            if(check(i)) dem++;
        }
        cout << dem << endl;
    }
}