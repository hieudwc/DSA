#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define is insert
#define all(x) (x).begin(), (x).end()
ll mod = 1e9 + 7;
const int INF = 1e9;

int so(string a){
    int n = 0;
    for(int i = 0; i < a.size(); i++){
        n = n * 10 + a[i] - '0';
    }
    return n;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<string> v;
        while(n--){
            string s;
            cin >> s;
            v.pb(s);
        }
        queue<int> q;
        for(int i = v.size() - 1; i >= 0; i--){
            if(v[i] != "+" && v[i] != "-" && v[i] != "*" && v[i] != "/"){
                q.push(so(v[i]));
            }
            else{
                int a = q.front();
                q.pop();
                int b = q.front();
                q.pop();
                if(v[i] == "+") q.push(b + a);
                else if(v[i] == "-") q.push(b - a);
                else if(v[i] == "*") q.push(b * a);
                else if(v[i] == "/") q.push(b / a);
            }
        }
        cout << q.front() << endl;
    }
}