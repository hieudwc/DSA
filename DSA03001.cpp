#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define is insert

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[10]={1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
        int cnt = 0;
        for(int i = 9; i >= 0; i--){
            while(n>=a[i]){
                cnt++;
                n-=a[i];
            }
        }
        cout << cnt << endl;
    }
}