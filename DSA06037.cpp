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
        int x, y, z;
        cin >> x >> y >> z;
        ll a[x], b[y], c[z];
        for (int i = 0; i < x; i++)
			cin >> a[i];
		for (int i = 0; i < y; i++)
			cin >> b[i];
		for (int i = 0; i < z; i++)
			cin >> c[i];
        int i = 0, j = 0, h = 0;
        vector<ll> v;
        while(i < x && j < y && h < z){
            if(a[i]==b[j] && b[j]==c[h]){
                v.pb(a[i]);
                i++;
                j++;
                h++;
            }
            else if(a[i]<b[j]) i++;
            else if(b[j]<c[h]) j++;
            else h++;
        }
        if(!v.size()) cout << -1 << endl;
        else {
            for(auto i : v) 
            cout << i << ' ';
            cout << endl;
        }
    }
}