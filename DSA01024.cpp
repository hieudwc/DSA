#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    vector<string> vs;
    map<string,int> mp;
    string x;
    cin.ignore();
    for(int i = 0; i < n; i++){
        cin >> x;
        mp[x]++;
    }
    for(auto i : mp){
        vs.push_back(i.first);
    }
    n = vs.size();
    vs.insert(vs.begin(),1,"");
    int ds[k+1];
    for(int i = 1; i <= k ; i++){
        ds[i]=i;
    }
    while(1){
        for(int i = 1; i <= k; i++) cout << vs[ds[i]] << ' ';
        cout << endl;
         int ok = 0;
        for (int i = k; i >= 1; i--)
        {
            if (ds[i] != n - k + i)
            {
                ok = 1;
                ds[i]++;
                for (int j = i + 1; j <= k; j++)
                    ds[j] = ds[j - 1] + 1;
                break;
            }
        }
        if (ok == 0) return 0;
    }
}