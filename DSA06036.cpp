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
        int n, K;
        cin >> n >> K;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a,a+n);
        int ok = 1;
        for(int i = 0; i < n; i++){
            int l = i+1, r = n - 1;
            while(l<r){
            if(a[i]+a[l]+a[r]==K) {
                cout << "YES" << endl;
                ok = 0;
                break;
            }
            else if(a[i]+a[l]+a[r]>K) r--;
            else if(a[i]+a[l]+a[r]<K) l++;
            }
            if(ok == 0) break;
        }
        if(ok) cout << "NO" << endl;
    }
}