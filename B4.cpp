#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define is insert
#define all(x) (x).begin(), (x).end()
ll mod = 1e9 + 7;

int check( string s){
    stack<char> st;
    for(char x : s){
    if(x == '(' || x == '[' || x == '{') st.push(x);
    else{
        if(st.empty()) return 0;
        char y = st.top();
        st.pop();
        if((x == ')' && y != '(')|| (x == ']' && y != '[') || (x == '}' && y != '{'))
        return 0;
    }
    }
    if(st.empty()) return 1;
    return 0;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        
        if(check(s)) cout << "true" << endl;
        else cout << "false" << endl;
    }
}