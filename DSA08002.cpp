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
    queue<int> q;
    while(t--){
        string s;
        cin >> s;
        if(s == "PUSH"){
            int x;
            cin >> x;
            q.push(x);
        }
        else if(s == "PRINTFRONT"){
            if(!q.empty()) cout << q.front() << endl;
            else cout << "NONE" << endl;
        }
        else if(s == "POP"){
            if(!q.empty()) q.pop();
        }
    }
}