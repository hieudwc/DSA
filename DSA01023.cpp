#include<bits/stdc++.h>
using namespace std;
int a[15], b[15];
int n, k;
bool ktra(){
    for(int i = 1; i <= k; i++){
        if(a[i]!=b[i]) return 0;
    }
    return 1;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n >> k;
        for(int i = 1; i <= k; i++){
            a[i] = i;
            cin >> b[i];
        }
        int x = 1;
        while(x){
            if(ktra()){
                cout << x << endl;
                break;
            }
            x++;
            for(int i = k; i >= 1; i--){
                if(a[i]!=n-k+i){
                    a[i]++;
                    for(int j = i + 1; j <= k; j++) a[j]=a[j-1]+1;
                    break;
                }
            }
        }
    }
}