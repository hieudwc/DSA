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
        int n;
        cin >> n;
        string s;
        queue<string> q;
        q.push("1");
        while(q.size()){
            string x = q.front();
            q.pop();
            if(stoll(x) % n == 0){
                cout << x << endl;
                break;
            }
            q.push(x + "0");
            q.push(x + "1");
        }
    }
}