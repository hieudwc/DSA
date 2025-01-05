#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define is insert
void tower(int n, char a, char b, char c){
    if(n==1){
        cout << a << " -> " << c << endl;
        return;
    }
    tower(n-1, a, c, b);
    tower(1, a, b, c);
    tower(n-1, b, a, c);
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    char a = 'A', b = 'B', c = 'C';
    tower(n, a, b, c);
}