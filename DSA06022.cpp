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
        int n; cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        sort(a,a+n);
        if(a[0]!=a[1]) cout << a[0] << ' ' << a[1] << endl;
        else cout << -1 << endl;
    }
}