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
        stack <string > st;
        for(int i = s.size()-1; i >= 0; i--){
            string tmp = "";
            if(s[i] >= 'A' && s[i] <= 'Z' || s[i] >= 'a' && s[i] <= 'z'){
                st.push(tmp + s[i]);
            }
            else{
                string k1 = st.top();
                st.pop();
                string k2 = st.top();
                st.pop();
                tmp =  '(' +k1 + s[i] + k2 + ')';
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