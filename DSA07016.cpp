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
        stack<int > st;
        st.push(1);
        int dem = 1;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == 'D'){
                dem++;
                st.push(dem);
            }
            else{
                while(st.size()){
                    cout << st.top();
                    st.pop();
                }
                dem++;
                st.push(dem);
            }
        }
        while(st.size()){
            cout << st.top();
            st.pop();
        }
        cout << endl;
    }
}