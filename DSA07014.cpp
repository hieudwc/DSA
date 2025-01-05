#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define is insert
#define all(x) (x).begin(), (x).end()
ll mod = 1e9 + 7;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        stack<ll> st;
        for(int i = s.size() - 1; i >= 0; i--){
            ll tmp = 0;
            if(isdigit(s[i])){
                st.push((ll)(s[i] - '0'));
            }
            else{
                ll k1 = st.top();
                st.pop();
                ll k2 = st.top();
                st.pop();
                if(s[i] == '+') tmp = k1 + k2;
                else if(s[i] == '-') tmp = k1 - k2;
                else if(s[i] == '*') tmp = k1 * k2;
                else if(s[i] == '/') tmp = k1 / k2;
                else if(s[i] == '%') tmp = k1 % k2;
                else if(s[i] == '^') {
                    tmp = pow(k1,k2);
                }
                st.push(tmp);
            }
        }
        cout << st.top() << endl;
    }
}