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
        stack<char > st;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == ']'){
                string x, y, ans = "";
                while(st.top() != '['){
                    x = st.top() + x;
                    st.pop();
                }
                st.pop();
                while(st.size() && st.top() >= '0' && st.top() <= '9'){
                    y = st.top() + y;
                    st.pop();
                }
                int n = 0;
                for(int i = 0; i < y.size(); i++){
                    n = n*10 + y[i] - '0';
                }
                if(n == 0) n++;
                for(int i = 0; i < n; i++){
                    ans += x;
                }
                for(int i = 0; i < ans.size(); i++)
                    st.push(ans[i]);
            }
            else st.push(s[i]);
        }
        string ans = "";
        while(st.size()){
            ans = st.top() + ans;
            st.pop();
        }
        cout << ans << endl;
    }
}