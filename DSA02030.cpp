#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define is insert
char m;
int n;
void Try(int i, string s = "", char c = 'A'){
    if(i==n){
        cout << s << endl;
        return;
    }
    for(char j = c; j <= m; j++ ) Try(i+1, s+j, j);
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> m;
    cin >> n;
    Try(0);
}