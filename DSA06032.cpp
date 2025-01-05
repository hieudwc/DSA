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
		ll n, K;
		cin >> n >> K;
		ll a[n];
		for(int i = 0; i < n; i++) 
			cin >> a[i];
		sort(a,a+n);
		ll cnt = 0;
		for(int i = 0; i < n; i++){
			ll l = i + 1, r = n - 1;
			while(l < r){
				if(a[i]+a[l]+a[r] < K){
					cnt = cnt + r - l ;
					l++;
				}
				else r--;
			}
		}
		cout << cnt << endl;
	}
}