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
        int n;
        cin >> n;
        int a[n];
        int r[n];
        for(int i = 0; i < n; i++)
            cin >> a[i];
        stack <int > st;
        for(int i = n-1; i >= 0; i--){
            while(!st.empty() && st.top() <= a[i]) st.pop();
            if(st.empty()) r[i] = -1;
            else r[i] = st.top();
            st.push(a[i]);
        }
        for(int i = 0; i < n; i++)
            cout << r[i] << " ";
        cout << endl;
    }
}