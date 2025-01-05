#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define is insert

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n; 
    cin >> n;
    vector<int> a(n);
    stack<vector<int>> st;
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++){
        int x = a[i];
        int pos = i - 1;
        while(pos>=0 && a[pos]>x){
            a[pos+1]=a[pos];
            pos--;
        }
        a[pos+1]=x;
        st.push(a);
    }
    while(st.size()){
        a=st.top();
        st.pop();
        cout << "Buoc " << n - 1 << ": ";
        n--;
        for(int i = 0; i <= n; i++){
            cout << a[i] << ' ';
        }
        cout << endl;
    }
}