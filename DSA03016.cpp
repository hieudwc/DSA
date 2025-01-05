#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define is insert

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int s, d;
        cin >> s >> d;
        stack<int> st;
        if(d == 1 && s == 0) cout << 0 << endl;
        if(s == 0 || d*9 < s) cout << -1 << endl;
        else{
            s--;
            while(d--){
                if(s >= 9){
                    st.push(9);
                    s-=9;
                }
                else if(s > 0){
                    st.push(s);
                    s = 0;
                }
                else
                    st.push(0);
            }
            cout << st.top() + 1;
            st.pop();
            while(st.size()){
                cout << st.top();
                st.pop();
            }
            cout << endl;
        }
    }
}