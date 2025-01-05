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
        int n, X;
        cin >> n >> X;
        int a[n];
        int check = 0;
        map<int, int> mp;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            mp[a[i]]++;
        }
        for(auto i : mp){
            if(i.first == X){
            cout << i.second << endl;
            check = 1;
            break;
            }
        }
        if(check == 0) cout << -1 << endl;
    }
}