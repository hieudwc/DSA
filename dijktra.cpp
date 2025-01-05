#include<iostream>
#include<queue>
#include<vector>
using namespace std;

vector<pair<int, int>> adj[20];
vector<vector<int>> res;
int n, be;
void print(int pre[], int t){
    vector<int> tmp;
    int t1 = t;
    while(1){
        tmp.push_back(t);
        if(t == be) break;
        t = pre[t];
    }
    res.push_back(tmp);
}
void dijkstra(){
    cin >> n >> be;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            int x; cin >> x;
            if(x){
                adj[i].push_back({j, x});
            }
        }
    }
    int pre[100];
    pre[be] = be;
    vector<long long> d(n+1, 1e9);
    d[be] = 0;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> qe;
    qe.push({0, be});
    while(!qe.empty()){
        pair<int, int> top = qe.top(); qe.pop();
        int u = top.second;
        int kc = top.first;
        print(pre, u);
        if(kc > d[u]){
            continue;
        }
        for(auto it : adj[u]){
            int v = it.first;
            int w = it.second;
            if(d[v] > d[u]+w){
                d[v] = d[u]+w;
                qe.push({d[v], v});
                pre[v]=u;
            }
        }
        
    }
   
     for(int i = 1; i<= n; i++){
        string s="K/c ";
        s = s+to_string(be);
        s = s+" -> ";
        s = s+ to_string(i);
        s = s+ " = ";
        if(d[i] == 1e9){
            s = s+"INF;";
            cout << s << endl;
        } else {
            s = s+to_string(d[i]);
            s = s+";";
            int t = 23-s.size();
            for(int j = 1; j <= t; j++){
                s = s+" ";
            }
            cout << s;
            for(int j = 0; j < res.size(); j++){
            if(res[j][0] == i){
                for(auto x : res[j]){
                    cout << x;
                    if(x != be){
                        cout << " <- ";
                    }
                }
                if(i == be) cout << " <- "<< be;
                cout << endl;
                break;
            }
        }
        }
        
     }
}

int main(){
    dijkstra();
    return 0;
}