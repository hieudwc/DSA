#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define is insert

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int k = n/2;
        int a[n];
        map<int,int> m;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            m[a[i]]++;
        }
        int Max = -1e9;
        int val=0;
        for(auto i : m){
            if(i.second>Max && i.second > k){
                Max=i.second;
                val=i.first;
            }
        }
        if(val) cout << val << endl;
        else cout << "NO" <<endl;
    }
}