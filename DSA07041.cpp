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
        int res = 0;
        stack<char> st;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '('){
                st.push(s[i]);
            }
            else{
                if(st.size() && st.top() == '('){
                    st.pop();
                    res += 2;
                }
                else st.push(s[i]);
            }
        }
        cout << res << endl;
    }
}