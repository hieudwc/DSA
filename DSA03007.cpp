#include <bits/stdc++.h>

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
        ll a[n];
        ll b[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) cin >> b[i];
        ll sum = 0;
        sort(a,a+n);
        sort(b,b+n,greater<int>());
        for(int i = 0; i < n; i++)
        sum+=a[i]*b[i];
        cout << sum << endl;
    }
}