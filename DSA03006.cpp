#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define is insert

int main(){
    int t;
    cin >> t;
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    while(t--){
        int n;
        cin >> n;
        int a[n], b[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
            b[i]=a[i];
        }
        sort(a,a+n);
        int ok = 1;
        for(int i = 0; i < n; i++){
            if(b[i]!=a[i] && b[i]!= a[n-i-1]){
                ok=0;
                break;
            }
        }
        if(ok) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}