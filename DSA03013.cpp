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
        map<char, int > m;
        for(auto c : s) m[c]++;
        int ok = 1;
        for(auto i : m){
            if(i.second * k > s.size()+1){
                ok = -1;
                break;
            }
        }
        cout << ok << endl;
    }
}