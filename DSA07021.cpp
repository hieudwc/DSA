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
        stack<int> st;
        st.push(-1);
        int res = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '(')
            st.push(i);
            else{
                st.pop();
                if(st.size() > 0) res = max(res, i - st.top());
                if(st.size() == 0) st.push(i);
            }
        }
        cout << res << endl;
    }
}