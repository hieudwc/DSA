#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define is insert

int n, a[12][12];
bool check[12][12];
vector<string> ans;
void Try(int i, int j, string s){
    if(i==n-1 && j == n-1){
        ans.pb(s);
        return;
    }
    if(i<n-1 && a[i+1][j]==1 && !check[i+1][j]){
        check[i][j]=true;
        Try(i+1,j,s+"D");
        check[i][j]=false;
    }
    if(j<n-1 && a[i][j+1]==1 && !check[i][j+1]){
        check[i][j]=true;
        Try(i,j+1,s+"R");
        check[i][j]=false;
    }
    if(j>0 && a[i][j-1]==1 && !check[i][j-1]){   
        check[i][j]=true;
        Try(i,j-1,s+"L");
        check[i][j]=false;
    }
    if(i>0 && a[i-1][j]==1 && !check[i-1][j]){
        check[i][j]=true;
        Try(i-1,j,s+"U");
        check[i][j]=false;
    }
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
            for(int j = 0; j < n; j++)
            cin >> a[i][j];
        }
        if(a[0][0]==1) Try(0,0,"");
        if(ans.size()==0) cout << -1 << endl;
        else{
            sort(ans.begin(),ans.end());
            for(auto i : ans)
            cout << i << ' ';
            cout << endl;
        }
    }
}