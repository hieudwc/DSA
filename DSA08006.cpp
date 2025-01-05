#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define is insert
#define all(x) (x).begin(), (x).end()
ll mod = 1e9 + 7;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        queue<int> q;
        q.push(9);
        while(q.size()){
            int x = q.front();
            q.pop();
            if(x % n == 0){
                cout << x << endl;
                break;
            }
            q.push(x * 10);
            q.push(x * 10 + 9);
        }   
    }
}