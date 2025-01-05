#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define is insert

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string n, m;
    cin >> n >> m;
    int sum1 = 0;
    for(int i = 0; i < n.size(); i++) if(n[i]=='6') n[i]='5';
    for(int i = 0; i < m.size(); i++) if(m[i]=='6') m[i]='5';
    int x = stol(n);
    int y = stol(m);
    sum1 = x + y;
    int sum2 = 0;
     for(int i = 0; i < n.size(); i++) if(n[i]=='5') n[i]='6';
     for(int i = 0; i < m.size(); i++) if(m[i]=='5') m[i]='6';
    int p = stol(n);
    int q = stol(m);
    sum2 = p + q;
    cout << sum1 << ' ' << sum2 << endl;

}