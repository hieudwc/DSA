#include<iostream>
#include<vector>
#include<cstring>
using namespace std;
int n;
vector<int> adj[1001];
bool visited[1001];
vector<pair<int,int>>dsc;
void DFS(int u){
    visited[u]=true;
    for(auto v : adj[u]){
        if(!visited[v]) DFS(v);
    }
}
void DFS2(int u, int s, int t){
    visited[u]=true;
    for(auto v : adj[u]){
        if((u==s && v == t)||(v==s && u ==t)) continue;
        if(!visited[v]) DFS2(v,s,t);
    }
}
void canhcau(){
    int tplt = 0;
    memset(visited,false,sizeof(visited));
    for(int i = 1; i <= n; i++){
        if(!visited[i]){
            tplt++;
            DFS(i);
        }
    }
    for(auto i : dsc){
        int s = i.first, t = i.second;
        memset(visited,false,sizeof(visited));
        int dem = 0;
        for(int j = 1; j <= n; j++){
            if(!visited[j]){
                dem++;
                DFS2(j, s, t);
            }
        }
        if(dem > tplt && s < t) cout << s << ' ' << t << endl;
    }
}
int main(){
    cin >>  n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            int x;
            cin >> x;
            if(x){
                adj[i].push_back(j);
                dsc.push_back({i,j});
            }
        }
    }
    canhcau();
}