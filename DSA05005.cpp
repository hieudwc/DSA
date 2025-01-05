#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define is insert
#define all(x) (x).begin(), (x).end()

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n], l[n];
         for(int i = 0; i < n; i++){
            cin >> a[i];
            l[i] = 1;
        }
        for(int i = 1; i < n; i++){
            for(int j = 0; j < i; j++){
                if(a[i] >= a[j]){
                    l[i] = max(l[i], l[j]+1);
                }
            }
        }
        int s = *max_element(l,l+n);
        cout << n - s << endl;
    }
}
