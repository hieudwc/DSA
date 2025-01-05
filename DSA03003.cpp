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
        for(int i = 0; i < n; i++) 
            cin >> a[i];
        ll max = 1e9 + 7, s = 0;
        sort(a,a+n);
        for(int i = 0; i < n; i++){
            s=(s+a[i]*i)%max;
        }
        cout << s << endl;
    }
}