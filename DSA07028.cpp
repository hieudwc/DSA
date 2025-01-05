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
        int a[n+1];
        stack< int > st;
        for(int i = 1; i <= n; i++)
            cin >> a[i];
        st.push(0);
        for(int i = 1; i <= n; i++){
            while(a[st.top()] <= a[i] && st.size() > 1){
                    st.pop();
                } 
            cout << i - st.top() << ' ';
            st.push(i);
        }
        cout << endl;
    }
}