#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define is insert
#define all(x) (x).begin(), (x).end()
ll mod = 1e9 + 7;

int main(){
   int n;
   cin >> n;
   int a[n+1][n+1];
   cin.ignore();
   for(int i = 1; i <= n; i++){
        string s, num;
        getline(cin,s);
        stringstream ss(s);
        while(ss >> num){
            a[i][stoi(num)] = 1;
        }
   }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(a[i][j] == 1) cout << a[i][j] << ' ';
            else cout << 0 << ' ';
        }
        cout << endl;
    }
}