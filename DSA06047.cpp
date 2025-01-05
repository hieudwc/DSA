#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define is insert


int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        ll a[n];
        for(int i = 0; i < n; i++)
            cin >> a[i];
        sort(a,a+n);
        int ok = 0;
        for(int i = 0; i < n; i++){
            for(int j = i+1; j < n; j++){
                ll ans =  a[i] * a[i] + a[j] * a[j];
                ll x = sqrt(ans);
                if(x*x == ans && binary_search(a+j+1, a+n, x)){
                    cout << "YES" << endl;
                    ok = 1;
                    break;
                }
            }
            if(ok) break;
        }
        if(!ok) cout << "NO" << endl;
    }
}