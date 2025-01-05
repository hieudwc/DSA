#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define is insert
bool cmp (int a, int b){
    return b < a;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n+1], b[n], c[n];
        int x = 1, y = 1;
        for(int i = 1; i <= n; i++){
            cin >> a[i];
            if(i%2==0){
                b[x]=a[i];
                x++;
            }
            else{
                c[y]=a[i];
                y++;
            }
        }
        sort(b+1, b + x ,cmp);
        sort(c+1, c + y );
        int m = 1;
        while(m != x && m != y){
            cout << c[m] << ' ' << b[m] << ' ';
            m++;
        }
        if(m!=x) cout << b[m] << endl;
        else if(m!=y) cout << c[m] << endl;
        else cout << endl;
    }
}