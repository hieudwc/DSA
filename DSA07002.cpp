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
    stack <int > st;
    while(t--){
        string s;
        cin >> s;
        if(s == "PUSH"){
            int x;
            cin >> x;
            st.push(x);
        }
        else if(s == "POP"){
            if(!st.empty())
            st.pop();
        }
        else if(s == "PRINT"){
            if(st.empty()){
                cout << "NONE" << endl;
            }
            else{
                cout << st.top() << endl;
            }
        }
    }
}