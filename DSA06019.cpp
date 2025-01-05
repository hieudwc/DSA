#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define is insert
bool sapxep(pair<int,int> a, pair<int,int> b){
    return a.second > b.second;
}
int main(){
    int t; 
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        map<int,int> m;
        vector<pair<int,int>> vp;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            m[a[i]]++;
        }
        sort(a,a+n);
        for(int i = 0; i < n; i++){
            vp.pb(mp(a[i],m[a[i]]));
        }
        stable_sort(vp.begin(),vp.end(),sapxep);
        for(auto i : vp){
            cout << i.first << ' ';
        }
        cout << endl;
    }
}