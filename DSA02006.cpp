#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define is insert
int n, K, a[100], b[100], ok;
void Try(int posa, int posb, int s){
    for(int i = 1+posa; i < n; i++){
        if(s+a[i]==K){
            ok = 1;
            b[posb+1]=a[i];
            cout << "[" << b[0];
            for(int i=1; i <= posb+1; i++){
                cout << ' ' << b[i];
            }
            cout << "] ";
            return;
        }
        else if(s+a[i]<K){
            b[posb+1]=a[i];
            Try(i,posb+1,s+a[i]);
        }
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        ok = 0;
        cin >> n >> K;
        for(int i = 0; i < n; i++)
            cin >> a[i];
        sort(a,a+n);
        Try(-1,-1,0);
        if(!ok) cout << -1 ;
        cout << endl;
    }
}