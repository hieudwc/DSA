#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define is insert
vector<vector<int>> vv;
vector<string> vs;
vector<int> v;
int n;
string k;
int a[1000];
void Try(int k){
    for(int i = k + 1; i <= n; i++){
        if(a[i]>a[k]){
            v.pb(a[i]);
            if(v.size()>1){
                vv.pb(v);
            }
            Try(i);
            v.erase(v.end()-1,v.end());
        }
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    a[0]=0;
    for(int i = 1; i <= n; i++)
        cin >> a[i];
    Try(0);
    for(int i = 0; i < vv.size(); i++){
        k="";
        for(int j = 0; j < vv[i].size();j++){
            k+=to_string(vv[i][j]);
            k+=" ";
        }
        vs.pb(k);
    }
    sort(vs.begin(),vs.end());
    for(auto i : vs) cout << i << endl;
}