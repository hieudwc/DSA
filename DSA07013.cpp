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
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        stack<ll> st;
        for(int i = 0; i < s.size(); i++){
            ll tmp = 0;
            if(isdigit(s[i])){
                st.push((ll)(s[i]-'0'));
            }
            else{
                ll k1 = st.top();
                st.pop();
                ll k2 = st.top();
                st.pop();
                if(s[i] == '+') tmp = k2 + k1;
                else if(s[i] == '-') tmp = k2 - k1;
                else if(s[i] == '*') tmp = k2 * k1;
                else if(s[i] == '/') tmp = k2 / k1;
                else if(s[i] == '%') tmp = k2 % k1;
                else if(s[i] == '^') {
                    tmp = pow(k2,k1);
                }
                st.push(tmp);
            }
        }
        while(st.size()){
            cout << st.top();
            st.pop();
        }
        cout << endl;
    }
}