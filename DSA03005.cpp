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
        int n, k;
        cin >> n >> k;
        int  a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a,a+n);
        int sum1 = 0, sum2 = 0;
        k=min(k,n-k);
        for(int i = 0; i < k; i++)
        sum1 += a[i];
        for(int i = k; i < n; i++)
        sum2 += a[i];
        cout << sum2 - sum1 << endl;
    }
}