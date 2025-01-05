#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define is insert
#define all(x) (x).begin(), (x).end()
ll mod = 1e9 + 7;

int LCS(string s1, string s2){
    int L[s1.size()+1][s2.size()+1];

    for(int i = 0; i <= s1.size(); i++){
        for(int j = 0; j <= s2.size(); j++){
            if(i == 0 || j == 0) L[i][j] = 0;
            else if(s1[i-1] == s2[j-1]) L[i][j] = L[i-1][j-1] + 1;
            else L[i][j] = max(L[i-1][j], L[i][j-1]);
        }
    }
    return L[s1.size()][s2.size()];
}
int main(){
    int t;
    cin >> t;
    while(t--){
        string n, m;
        cin >> n >> m;
        cout << LCS(n, m) << endl;
    }
}