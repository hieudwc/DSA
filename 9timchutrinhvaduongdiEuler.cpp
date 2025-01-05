#include<iostream>
#include<stack>
#include<vector>
#include <set>
#include<algorithm>
using namespace std;
int n, k;
set<int> adj[1000];
void euler(int u){
    stack<int> st;
    vector<int> EC;
    st.push(u);
    while(!st.empty()){
        int x = st.top();
        if(adj[x].size()){
            int y = *adj[x].begin();
            st.push(y);
            adj[x].erase(y);
            adj[y].erase(x);
        }
        else{
            st.pop();
            EC.push_back(x);
        }
    }
    reverse(begin(EC),end(EC));
    for(int x : EC) cout << x << ' ';
}
int main(){
    cin >> n >> k;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            int x; cin >> x;
            if(x){
                adj[i].insert(j);
                adj[j].insert(i);
            }
        }
    }
    euler(k);
}