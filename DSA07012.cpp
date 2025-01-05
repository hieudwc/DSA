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
        stack<string > st;
        for (int i = 0; i < s.size(); i++){
            string tmp = "";
            if(s[i] >= 'A' && s[i] <= 'Z' || s[i] >= 'a' && s[i] <= 'z'){
                st.push(tmp + s[i]);
            }
            else{
                string k1 = st.top();
                st.pop();
                string k2 = st.top();
                st.pop();
                st.push('(' + k2 + s[i] + k1 + ')');
            }
        }
        while(st.size()){
            cout << st.top();
            st.pop();
        }
        cout << endl;
    }
}