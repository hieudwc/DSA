#include<iostream>
#include<vector>

using namespace std;
int n;
vector<int> adj[1001];
int visited[1001];
void DFS(int u){
    visited[u]=1;
    for(auto v : adj[u]){
        if(!visited[v]){
            DFS(v);
        }
    }
}
void connectedComponent(){
    int ans = 0;
    for(int i = 1; i <= n; i++){
        if(!visited[i]){
            ans++;
            DFS(i);
        }
    }
    cout << ans << endl;
}
int main(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            int x;
            cin >> x;
            if(x){
                adj[i].push_back(j);
            }
        }
    }
    connectedComponent();
}