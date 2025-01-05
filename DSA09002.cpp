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
    vector<pair<int,int>> vp;
    cin.ignore();
    for(int i = 1; i <= t; i++){
        string s;
        getline(cin, s);
        stringstream ss;
        while(ss >> s){
            if(stoll(s) > i)
                vp.pb({i, stoll(s)});
        }
    }
    for(int i = 0; i < vp.size(); i++){
        cout << vp[i].first << " " << vp[i].second  << endl;
    }
}