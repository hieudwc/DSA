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
        int pos;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            if(a[i]==X){
                pos = i;
            }
        }
        cout << pos + 1z << endl;
    }
}