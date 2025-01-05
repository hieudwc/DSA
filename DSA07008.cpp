#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define is insert
#define all(x) (x).begin(), (x).end()
ll mod = 1e9 + 7;

int uuTien(char c){
    if(c == '^') return 5;
    if(c == '*' || c == '/') return 4;
    if(c == '+' || c == '-') return 3;
    return 2;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        string res = "";
        stack<char> st;
        for(int i = 0; i < s.size(); i++){
            if(s[i] >= 'A' && s[i] <= 'Z' || s[i] >= 'a' && s[i] <= 'z') res += s[i];
            else if(s[i] == '(') st.push(s[i]);
            else if(s[i] == ')') {
                while(st.size() && st.top() != '('){
                    res += st.top();
                    st.pop();
                }
                st.pop();
            }
            else if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '^'){
                while(st.size() && uuTien(st.top()) >= uuTien(s[i])){
                    res += st.top();
                    st.pop();
                }
                st.push(s[i]);
            }
        }
        while(st.size()){
            if(st.top() != '(') res += st.top();
            st.pop();
        }
        cout << res << endl;
    }
}