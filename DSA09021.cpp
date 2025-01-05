#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define is insert
#define all(x) (x).begin(), (x).end()
ll mod = 1e9 + 7;

int a[1001][1001];
vector<int> adj[1001];
int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            int x;
            cin >> x;
            if(x){
                adj[i].pb(j);
            }
        }
    }
    for(int i = 1; i <= n; i++){
        for(int j : adj[i]){
            cout << j << ' ';
        }
        cout << endl;
    }
}