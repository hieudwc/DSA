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
int sz[1005];
struct edge{
    int u, v, w;
};
bool cmp(edge a, edge b){
    if(a.w == b.w) return a.u < b.u;
    else return a.w < b.w;
}
vector<edge> adj;
//
void khoitao(){
    for(int i = 1; i <= n; i++){
        parent[i] = i;
        sz[i] = 1;
    }
}
int find(int x){
    if(x == parent[x]) return x;
    else return find(parent[x]);
}
bool Union(int x, int y){
    x = find(x);
    y = find(y);
    if(x == y) return false;
    else{
        if(sz[x] < sz[y]) swap(x,y);
        parent[y] = x;
        sz[x] += sz[y];
        return true;
    }
}// su dung cau truc du lieu disjoint_set de ktra xem dinh u va v cho vao co thuoc 1 thanh phan lien thong khong
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