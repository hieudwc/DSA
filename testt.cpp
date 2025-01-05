#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define is insert
#define all(x) (x).begin(), (x).end()
ll mod = 1e9 + 7;
int n;
int a[15];
void in(int i){
    cout << '[' << a[1];
    for(int j = 2; j <= n - i; j++){
        cout << ' ' << a[j];
    }
    cout << ']' << endl;
}
void Try(int i){
    for(int j = 1; j <= n - i; j++){
        a[j] = a[j] + a[j+1]; 
    }
    in(i);
    if(i == n - 1) return;
    else Try(i + 1);
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }
        in(0);
        Try(1);
    }
}