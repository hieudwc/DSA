#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define is insert
#define all(x) (x).begin(), (x).end()
int binSearch(vector<ll> &a, vector<ll> &b){
    int l = 0, r = a.size()-2, mid, res;
    while(l <= r){
        mid = l + r >> 1;
        if(a[mid] != b[mid]){
            res = mid;
            r = mid - 1;
        }
        else{
            l = mid + 1;
        }
    }
    return res;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<ll> a(n), b(n-1);
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n-1; i++) cin >> b[i];
        cout << binSearch(a,b) + 1 << endl;
    }
}