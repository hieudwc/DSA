#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define is insert
#define all(x) (x).begin(), (x).end()
ll mod = 1e9 + 7;
const int INF = 1e9;
int n, m, u;
vector<pair<int,int>> adj[1005];
void Dijkstra(int s){
    vector<ll> d(n+1, INF);
    d[s] = 0;
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    pq.push({0, s});
    //{khoang cach, dinh}
    while(pq.size()){
        //chon ra dinh co kc nho nhat
        pair<int,int > top = pq.top();
        pq.pop();
        int v = top.second;
        int dist = top.first;
        if(dist > d[v]) continue;
        // Cap nhat kc tu dinh s cho toi moi canh ke cua v
        for(auto i : adj[v]){
            int x = i.first;
            int y = i.second;
            if(d[x] > d[v] + y){
                d[x] = d[v] + y;
                pq.push({d[x], x});
            }
        }
    }
    for(int i = 1; i <= n; i++){
        cout << d[i] << ' ';
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n >> m >> u;
        for(int i = 0; i < m; i++){
            int x, y, z;
            cin >> x >> y >> z;
            adj[x].pb({y, z});
            adj[y].pb({x, z});
        }
        Dijkstra(u);
        cout << endl;
        for(int i = 1; i <= n; i++) adj[i].clear();
    }
}