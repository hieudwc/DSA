#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int n, parent[20], size[20];
struct edge{
    int x, y, w;
};
vector<edge> adj;
bool cmp(edge a, edge b){
    if(a.w == b.w) return a.x < b.x;
    else return a.w < b.w;
}
void nhap(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            int x; cin >> x;
            if(x){
                edge tmp;
                tmp.x = i;
                tmp.y = j;
                tmp.w = x;
                adj.push_back(tmp);
            }
        }
    }
}
void khoitao(){
    for(int i = 1; i <= n; i++){
        parent[i]=i;
        size[i]=1;
    }
}
int find(int u){
    if(u == parent[u]) return u;
    else return parent[u]=find(parent[u]);
}
bool Union(int u, int v){
    u = find(u);
    v = find(v);
    if(u==v) return false;
    else{
        if(size[u]<size[v]) swap(u,v);
        parent[v]=u;
        size[u]+=size[v];
        return true;
    }
}
void Kruskal(){
    vector<edge> mst;
    int dh = 0;
    sort(adj.begin(),adj.end(),cmp);
    for(auto k : adj){
        if(mst.size()==n-1) break;
        if(Union(k.x,k.y)){
            mst.push_back(k);
            dh+=k.w;
        }
    }
    cout << "dH = " << dh << endl;
    for(auto e : mst) cout << e.x << ' ' << e.y << endl;
}
int main(){
    nhap();
    khoitao();
    Kruskal();
}