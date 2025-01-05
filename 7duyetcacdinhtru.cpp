#include<iostream>
#include<vector>
#include<cstring>
using namespace std;
int n;
vector<int> adj[1001];
bool visited[1001];
void DFS(int u){
    visited[u]=true;
    for(auto v : adj[u]){
        if(!visited[v]) DFS(v);
    }
}
void dinhtru(){
    int tplt = 0;
    memset(visited, false, sizeof(visited));
    for(int i = 1; i <= n; i++){
        if(!visited[i]){
            tplt++;
            DFS(i);
        }
    }
    for(int i = 1; i <= n; i++){
        int dem = 0;
        memset(visited,false,sizeof(visited));
        visited[i]=true;
        for(int j = 1; j <= n; j++){
            if(!visited[j]){
                dem++;
                DFS(j);
            }
        }
    if(dem>tplt) cout << i <<' ';
    }
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
    dinhtru();
    cout << endl;
}