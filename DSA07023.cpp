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
        getline(cin, s);
        stack<string> st;
        stringstream ss(s);
        while(ss >> s){
            st.push(s);
        }
        while(st.size()){
            cout << st.top() << ' ';
            st.pop();
        }
        cout << endl;
    }
}