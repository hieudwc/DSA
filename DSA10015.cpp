#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define is insert
#define all(x) (x).begin(), (x).end()
ll mod = 1e9 + 7;
const int INF = 1e9;

int n, m;
int parent[1005];
int size[1005];
struct edge{
    int u, v, w;
};
bool cmp(edge a, edge b){
    if(a.w == b.w) return a.u < b.u;
    else return a.w < b.w;
}
vector<edge> adj;
void khoitao(){
    for(int i = 1; i <= n; i++){
        parent[i] = i;
        size[i] = 1;
    }
}
int find(int u){
    if(u == parent[u]) return u;
    else return find(parent[u]);
}
bool Union(int u, int v){
    u = find(u);
    v = find(v);
    if(u == v) return false;
    else{
        if(size[u] < size[v]) swap(u,v);
        parent[v] = u;
        size[u] += size[v];
        return true;
    }
}
void Kruskal(){
    vector<edge>mst;
    int dh = 0;
    sort(adj.begin(), adj.end(), cmp);
    for(auto k : adj){
        if(mst.size() == n - 1) break;
        if(Union(k.u, k.v)){
            mst.pb(k);
            dh += k.w;
        }
    }
    cout << dh << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n >> m;
        for(int i = 0; i < m; i++){
            int x, y, z;
            cin >> x >> y >> z;
            edge e;
            e.u = x;
            e.v = y;
            e.w = z;
            adj.pb(e);
        }
        khoitao();
        Kruskal();
        adj.clear();
    }
}