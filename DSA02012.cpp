#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define is insert
int a[101][101];
int n, m, s = 0;
vector<string> v;
void Try(int i, int j, string s){
    if(i==n-1 && j == m-1){
        v.pb(s);
        return;
    }
    if(a[i+1][j]>a[i][j] && i < n-1) Try(i+1,j,s+"D");
    if(a[i][j+1]>a[i][j] && j < m-1)Try(i,j+1,s+"R");
}
int main(){
    int t;
    cin >> t;
    while(t--){
        v.clear();
        cin >> n >> m;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin >> a[i][j];
            }
        }
        Try(0,0,"");
        for(int i = 0; i < v.size(); i++){
            cout << v[i] << ' ';
        }
    }
}