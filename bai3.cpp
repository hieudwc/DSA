#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll solve(int a[], int n){
    stack<int> st;
    int i = 0;
    ll res = 0;
    while(i < n){
        if(st.empty() || a[st.top()] < a[i]){
            st.push(i);
            i++;
        }
        else{
            int id = st.top();
            st.pop();
            if(st.empty()){
                res = max(res, (ll) a[id] * i);
            }
            else{
                res = max (res, (ll) a[id] * (i - st.top() - 1));
            }
        }
    }
    while(st.size()){
        int id = st.top();
        st.pop();
        if(st.empty()){
            res = max(res, (ll) a[id] * i);
        }
        else{
            res = max (res, (ll) a[id] * (i - st.top() - 1));
        }
    }
    return res;
}
int main(){
    int m, n;
    cin >> m >> n;
    int a[n], b[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
        b[i] = m - a[i];
    }
    cout << max (solve(a,n), solve(b,n));
}