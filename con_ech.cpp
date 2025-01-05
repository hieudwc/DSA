#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, q;
    cin >> n >> q;
    int a[n+1];
    for(int i = 1; i <= n; i++)
        cin >> a[i];
    for(int i = n - 1; i >= 0; i--){
        while(s)
    }
    while(q--){
        int x;
        cin >> x;
        stack<int> st;
        st.push(a[x]);
        int ans = 0;
        for(int i = x + 1; i <= n; i++){
            if(st.size() && st.top() < a[i]){
                st.pop();
                st.push(a[i]);
                ans++;
            }
        }
        cout << ans << endl;
    }
}