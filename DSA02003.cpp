#include <bits/stdc++.h>

using namespace std;
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define is insert
vector<string> ans;
int n;
int a[12][12];
void Try(int i, int j, string s){
    if(i==n-1 && j == n-1){
        ans.pb(s);
        return;
    }
    if(i<n-1 && a[i+1][j]==1)
        Try(i+1,j,s+"D");
    if(j<n-1 && a[i][j+1]==1)
        Try(i,j+1,s+"R");
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        ans.clear();    
        cin >> n;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cin >> a[i][j];
            }
        }
        if(a[0][0]==1) 
        Try(0,0,"");
        if(ans.size()==0) cout << -1 << endl;
        else {
            for(int i = 0; i < ans.size();i++)
            cout << ans[i] << ' ';
            cout << endl;
        }
    }
}