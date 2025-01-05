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
        cin.ignore();
        string s;
        getline(cin,s);
        stack<char > st;
        int ok = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '(' || s[i] == '+' || s[i] == '*' || s[i] == '/' || s[i] == '-'){
                st.push(s[i]);
            }
            else if(s[i] == ')'){
                if(st.top() == '('){
                    ok = 1;
                    break;
                }
                    while(st.size() && st.top() != '(')
                        st.pop();
                    st.pop();
            }
        }
        if(ok) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}