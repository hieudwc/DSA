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
        set<int> s;
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++){
            while(a[i]){
                int x = a[i]%10;
                s.is(x);
                a[i]/=10;
            }
        }
        for(auto i : s) cout << i << ' ';
        cout << endl;
    }
}