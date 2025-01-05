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
int dem(){
    int cnt = 0;
    for(int i = 1; i <= n; i++){
        if(visited[i]) cnt++;
    }
    return cnt;
}
void Clear(){
    for(int i = 0; i < 1001; i++){
        visited[i]=0;
    }
}
bool check(){
    for(int i = 1; i <= n; i++){
        DFS(i);
        int val = dem();
        if(val!=n){
            return false;
        }
        else Clear();
    }
    return true;
}
int main(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            int x; cin >> x;
            if(x){
                adj[i].push_back(j);
            }
        }
    }

    if(check()) cout << "strongly connected";
    else cout << "not strongly connected";
}