#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define is insert
#define all(x) (x).begin(), (x).end()

int main (){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    int l[n];
    for(int i = 0; i < n; i++){
        l[i] = 1;
    }
    for(int i = 1; i < n; i++){
        for(int j = i-1; j >= 0; j--){
            if(a[i] > a[j]){
                l[i] = max(l[i],l[j]+1);
            }
        }
    }
    cout << *max_element(l,l+n) << endl;

    return 0;
}