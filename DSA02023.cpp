#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define is insert

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, k;
    cin >> n >> k;
    string s;
    vector<string> vs;
    map<string,int> ms;
    for(int i = 0; i < n; i++){
        cin >> s;
        ms[s]++;
    }
    for(auto i : ms){
        vs.pb(i.first);
    }
    n=vs.size();
    vs.insert(vs.begin(),1,"");
    int ds[k+1];
    for(int i = 1; i <= k; i++)
        ds[i]=i;
    while(1){
        for(int i = 1; i <= k; i++)
        cout << vs[ds[i]] << ' ';
        cout << endl;
        int ok = 1;
        for(int i = k; i >= 1; i--){
            if(ds[i] != n-k+i){
                ok = 0;
                ds[i]++;
                for(int j = i + 1; j <= k; j++)
                    ds[j]=ds[j-1]+1;
                break;
            }
        }
        if(ok) break;
    }
}