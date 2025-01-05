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
        string s;
        cin >> s;
        map<char, int> m;
        for(auto c : s) m[c]++;
        int check = 1;
        for(auto i : m){
            if(i.second*2-1 > s.size()){
                check = -1;
                break;
            }
        }
        cout << check << endl;
    }
}