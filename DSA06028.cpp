#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define is insert

int main(){
        int n;
        cin >> n;
        int k=n;
        vector<int> a(n);
        stack<vector<int>> st;
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < n-1; i++){
            int k = i;
            for(int j = i+1; j < n; j++){
                if(a[k]>a[j]) {
                    k = j;
                }
            }
            swap(a[k],a[i]);
            st.push(a);
        }
        while(st.size()){
            a = st.top();
            st.pop();
            cout << "Buoc " << n-1 << ": ";
            n--;
            for(int i = 0; i < k; i++){
                cout << a[i] << ' ';
            }
            cout << endl;
        }
}