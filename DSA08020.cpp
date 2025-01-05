#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define is insert
#define all(x) (x).begin(), (x).end()
ll mod = 1e9 + 7;

bool nto(int n){
    if(n < 2) return false;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return false;
    }
    return true;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        string s1, s2;
        cin >> s1 >> s2;
        pair<string, int> u;
        queue<pair<string,int>> q;
        map<string,int> m;
        m[s1]++;
        q.push({s1,0});
        while(q.size()){
            u = q.front();
            q.pop();
            string s = u.first;
            if(s == s2){
                cout << u.second << endl;
                break;
            }
            for(int i = 0; i < s1.size(); i++){
                int pos = 0;
                if(i == 0) pos++;
                for(int j = pos; j <= 9; j++){
                    s[i] = j + '0';
                    if(!m[s] && nto(stoll(s))){
                        m[s]++;
                        q.push({s, u.second + 1});
                    }
                }
                s = u.first;
            }
        }
    }
}
