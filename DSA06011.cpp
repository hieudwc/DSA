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
        int a[n];
        int ans;
        int check = 1e9;
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n-1; i++){
            for(int j = i+1; j < n; j++){
                if(abs(a[i]+a[j])<check){
                check = abs(a[i]+a[j]);
                ans= a[i]+a[j];
                }
            }
        }
        cout << ans << endl;
    }
}