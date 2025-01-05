#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define is insert
#define all(x) (x).begin(), (x).end()
ll mod = 1e9 + 7;

int main(){
    stack <int> st;
    string s;
    while(cin >> s){
        if(s == "push"){
            int x;
            cin >> x;
            st.push(x);
        }
        else if(s == "pop"){
            st.pop();
        }
        else if(s == "show"){
            if(st.size()){
                stack<int > q;
                while(st.size()){
                    q.push(st.top());
                    st.pop();
                }
                while(q.size()){
                    cout << q.top() << ' ';
                    st.push(q.top());
                    q.pop();
                }
            cout << endl;
            }
            else {
            cout << "empty" << endl;
            }
        }
    }
}