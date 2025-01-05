#include<bits/stdc++.h>
using namespace std;
bool sapxep(pair<int , int >a, pair<int, int> b){
    return a.second < b.second;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, X;
        vector <pair <int,int>>  vp;
        cin >> n >> X;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
            vp.push_back(make_pair(a[i],abs(X-a[i])));
        }
        stable_sort(vp.begin(),vp.end(),sapxep);
        for(auto i : vp) cout << i.first << ' ';
        cout << endl;
    }
}