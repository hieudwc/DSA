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
        stack<string> st;
        for(int i = s.size()-1; i >= 0; i--){
            string tmp = "";
            if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/'){
                tmp += st.top();
                st.pop();
                tmp += st.top() + s[i];
                st.pop();
                st.push(tmp);
            }
            else st.push(tmp + s[i]);
        }
        while(st.size()) {
            cout << st.top() ;
            st.pop();
        }
        cout << endl;
    }
}