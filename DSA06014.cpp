#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define is insert 
bool nto(int n){
    if(n<2) return 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n%i==0) return 0;
    }
    return 1;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int check = 0;
        for(int i = 2; i <= n/2; i++){
            if(nto(i)==1 && nto(n-i)==1){
                cout << i << ' ' << n-i << endl;
                check = 1;
                break;
            }
        }
        if(check==0) cout << -1 << endl;
    }
}