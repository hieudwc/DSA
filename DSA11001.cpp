#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define is insert
#define all(x) (x).begin(), (x).end()
ll mod = 1e9 + 7;
const int INF = 1e9;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        stack<string> st;
        for(int i = 0; i < s.size(); i++){
            string tmp = "";
            if(s[i] >= 'a' && s[i] <= 'z'){
                tmp += s[i];
                st.push(tmp);
            }
            else{
                string x = st.top();
                st.pop();
                string y = st.top();
                st.pop();
                tmp += y + s[i] + x;
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