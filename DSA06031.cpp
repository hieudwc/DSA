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
        int n, k;
        cin >> n >> k;
        int a[n];
        for(int i = 0; i < n; i++)
        cin >> a[i];
        for(int i = 0; i < n - k + 1; i++){
            int x = *max_element(a+i,a+i+k);
            cout << x << ' ';
        }
        cout << endl;
    }
}