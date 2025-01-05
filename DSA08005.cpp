#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define is insert
#define all(x) (x).begin(), (x).end()
ll mod = 1e9 + 7;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<string> v(10005);
        stack<int > st;
        string tmp;
        for(int i = 1; i <= 1e4; i++){
            int x = i;
            tmp = "";
            while(x){
                st.push(x&1);
                x >>= 1;
            }
            while(st.size()){
                tmp += to_string(st.top());
                st.pop();
            }
            v[i] = tmp;
        }
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        for(int i = 1; i <= n; i++)
            cout << v[i] << ' ';
        cout << endl;
    }
}
