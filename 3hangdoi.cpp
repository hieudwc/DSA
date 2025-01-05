#include<bits/stdc++.h>
#include<queue>
#include<vector>

using namespace std;

int n, m, s, t;
int ok = 0;
vector<int> ve[10000];
int visited[10000];
void BFS(int u){
    vector<int> res;
    queue<int> qu;
    qu.push(u);
    visited[u]=1;
    while(qu.size()){
        int x = qu.front();
        qu.pop();
        res.push_back(x);
        for(int v : ve[x]){
            for(int k : ve[v]){
                if(k == t && !visited[t]){
                    res.push_back(v);
                    res.push_back(t);
                    ok = 1;
                    for(auto i : res) cout << i << ' ';
                    return;
                }
            }
            if(!visited[v]){
                qu.push(v);
                visited[v]=1;
            }
        }
    }
}
int main(){
    int test;
    cin >> test;
    while(test--){
        cin >> n >> m >> s >> t;
        for(int i = 0; i < m; i++){
            int x, y;
            cin >> x >> y;
            ve[x].push_back(y);
            ve[y].push_back(x);
            }
        BFS(s);
        if(!ok) cout << -1;
        cout << endl;
        ok = 0;
        for(int i = 0; i < 10000; i++){
            visited[i]=0;
        }
        for(int i = 0; i < 10000; i++){
            ve[i].clear();
        }
    }
}