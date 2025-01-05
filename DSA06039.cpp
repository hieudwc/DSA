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
        int a[n];
        int s = 0, k = 0;
        int ans = - 1;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            s+=a[i];
        }
        for(int i = 0; i < n; i++){
            if(k*2 + a[i] == s){
                ans = i + 1;
                break;
            }
            else k += a[i];
        }
        cout << ans << endl;
    }
}