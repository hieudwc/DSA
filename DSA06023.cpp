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
        for(int i = 0; i < n; i++) cin >> a[i];
        int cnt = 1;
        for(int i = 0; i < n-1; i++){
            int ok = 0;
            for(int j = i+1; j < n; j++){
                if(a[i]>a[j]){
                    swap(a[i],a[j]);
                    ok = 1;
                }
            }
            if(ok){
                cout << "Buoc " << cnt << ": " ;
                for(int i = 0; i < n; i++)
                cout << a[i] << ' ';
                cout << endl;
                cnt++;
            }
   }
}