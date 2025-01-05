#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define is insert

int main(){
    int n;
    cin >> n;
    int a[n];
    int cnt = 1;
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n-1; i++){
        int k = i;
        for(int j = i + 1; j < n; j++){
            if(a[j]<a[k])
            k = j;
        }
        swap(a[k],a[i]);
            cout << "Buoc " << i+1 << ": " ;
            for(int j = 0; j < n; j++) 
            cout << a[j] << ' ';
            cout << endl;
    }
}