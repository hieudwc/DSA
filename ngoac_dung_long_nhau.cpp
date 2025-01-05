#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int res = 0;
        bool check = 0;
        stack <int> st;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '('){
                st.push(i);
                int n = st.size();
                res = max(res, n);
            }
            else if(s[i] == ')'){
                if(st.empty()){
                    check = 1;
                    break;
                }
                else st.pop();
            }
        }
        //cout << st.size() << endl;
        if(!st.empty()) check = 1;
        if(check) cout << "-1\n";
        else cout << res << endl;
    }
}