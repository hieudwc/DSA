#include<iostream>
#include<vector>

using namespace std;
int n, k;
int a[20][20];
vector<int> adj[20];
bool used[20];
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
void nhap(){
    cin >> n >> k;
    if(!check()) 
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
            if(a[i][j]){
                adj[i].push_back(j);
            }
        }
    }
    for(int i = 1; i <= n; i++)
        used[i]=false;
}
void prim(){
    used[k] = true;
    vector<pair<int,int>> res;
    int d = 0;
    while(res.size()<n-1){
        int x, y, min = 1e9;
        for(int i = 1; i <= n; i++){
            if(used[i]){
                for(auto j : adj[i]){
                    if(!used[j] && a[i][j] < min){
                        x = i;
                        y = j;
                        min = a[i][j];
                    }
                }
            }
        }
        res.push_back({x,y});
        used[y]=true;
        d+=min;
    }
    cout << "dH = " << d << endl;
    for(auto x : res){
        cout << min(x.first, x.second) << ' ' <<  max(x.first, x.second) << endl;
    }
}
int main(){
    nhap();
    prim();
}