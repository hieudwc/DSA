#include<bits/stdc++.h>

using namespace std;
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
        int a[n], b[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++){
            cout << "[" << a[0];
            for(int j = 1; j < n-i; j++){
                cout << ' ' << a[j];
                b[j-1]=a[j-1]+a[j];
            }
            cout << "]" << endl;
            for(int j = 0; j < n - i; j++){
                a[j]=b[j];
            }
        }
    }
}
