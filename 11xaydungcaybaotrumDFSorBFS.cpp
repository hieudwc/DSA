#include<iostream>
#include <queue>
#include<vector>

using namespace std;
vector<pair<int,int>> vp;
int n, k;
int visited[100];
vector<int> adj[100];
void DFS(int u){
    visited[u]=1;
    for(int v : adj[u]){
        if(!visited[v]){
            vp.push_back({u,v});
            DFS(v);
        }
    }
}
void BFS(int u){
    queue<int> que;
    que.push(u);
    visited[u]=1;
    while(que.size()){
        int x = que.front();
        que.pop();
        for(int v : adj[x]){
            if(!visited[v]){
                que.push(v);
                visited[v]=1;
                vp.push_back({x,v});
            }
        }
    }
}
int main(){
    cin >> n >> k;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            int x; cin >> x;
            if(x){
                adj[i].push_back(j);
            }
        }
    }
    cout << "DFS tree" << endl;
    DFS(k);
    for(auto i : vp) cout << min(i.first,i.second) << ' ' << max(i.first,i.second) << endl;
    vp.clear();
    for(int i = 0; i < 101; i++) visited[i]=0;
    cout << "BFS tree" << endl;
    BFS(k);
    for(auto i : vp) cout << min(i.first,i.second) << ' ' << max(i.first,i.second) << endl;
}