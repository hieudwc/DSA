#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define is insert
bool cmp (int a, int b){
    return b < a;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++)
            cin >> a[i];
        sort(a,a+n);
        int min = 1e9;
        for(int i = 0; i < n-1; i++){
            int val = a[i+1]-a[i];
            if(val<min) min = val;
        }
        cout << min << endl;
    }
}