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
        int n, s, m;
        cin >> n >> s >> m;
        if(s*m > (s-s/7)*n){
            cout << -1 << endl;
        }
        else{
        for(int i = 1; i <= s - s/7; i++){
            if(n*i >= s*m){
                cout << i << endl;
                break;
            }
        }
        }
    }
}