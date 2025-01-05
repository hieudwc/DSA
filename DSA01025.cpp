#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; 
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int a[k+1];
        for(int i = 1; i <= k; i++) a[i]=i;
        while(1){
            int check = 0;
            for(int i = 1; i <= k; i++) cout << (char)(a[i]+'A'-1);
            cout << endl;
            for(int i = k; i >= 1; i--){
                if(a[i]!=n-k+i){
                    check = 1;
                    a[i]++;
                    for(int j = i+1; j <= k; j++) a[j]=a[j-1]+1;
                    break;
                }
            }
            if(check == 0) break;
        }
    }
}