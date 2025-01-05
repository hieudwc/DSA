#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int n;
vector<int> adj[1001];
int visited1[1001];
int visited2[1001];
int ke1[1001];
int ke2[1001];
void DFS(int u){
    visited1[u]=1;
    for(auto v : adj[u]){
        if(!visited1[v]){
            ke1[v]=u;
            DFS(v);
        }
    }
    
}
void BFS(int u){
    queue<int>que;
    que.push(u);
    visited2[u]=1;
    while(!que.empty()){
        int x = que.front();
        que.pop();
        for(auto v : adj[x]){
            if(!visited2[v]){
                que.push(v);
                ke2[v]=x;
                visited2[v]=1;
            }
        }
        
    }
}
int main(){
    cin >> n;
    int s, t;
    cin >> s >> t;
    int k = t;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            int x; cin >> x;
            if(x){
                adj[i].push_back(j);
            }
        }
    }
    DFS(s);
    if(visited1[t]){
        vector <int > res;
        while(t!=s){
            res.push_back(t);
            t = ke1[t];
        }
        res.push_back(s);
        cout << "DFS path: ";
        for(auto x : res)
        cout << x << ' ';
        cout << endl;
        res.clear();
        BFS(s);
        while(k!=s){
            res.push_back(k);
            k=ke2[k];
        }
        res.push_back(s);
        cout << "BFS path: ";
        for(auto x : res)
        cout << x << ' ';
    }
    else cout << "no path";
}