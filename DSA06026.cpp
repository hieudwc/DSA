#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define is insert

int main(){
    int n;
    int cnt = 1;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
    cin >> a[i];
    for(int i = 0; i < n-1; i++){
        int ok = 0;
        for(int j = 0; j < n- i - 1; j++){
            if(a[j]>a[j+1]){
            swap(a[j],a[j+1]);
            ok = 1;
            }
        }
        if(ok == 0) break;
        cout << "Buoc " << cnt ++ << ": ";
        for(int i = 0; i < n; i++)
        cout << a[i] << ' ';
        cout << endl;
    }
}