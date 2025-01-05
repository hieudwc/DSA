#include<bits/stdc++.h>
#include<stack>
#include<vector>
#define max 100
using namespace std;
vector<int> ve[1000];
int visited[1000];
void BFS(int u){
    memset(visited, 0, sizeof(visited));
    queue<int> q;
    q.push(u);
    visited[u] = 1;
    while(q.size()){
        int x = q.front();
        cout << x << ' ';
        if(x == 1) return;
        q.pop();
        for(int v : ve[x]){
            if(!visited[v]){
                q.push(v);
                visited[v] = 1;
        }
    }
    cout << endl;
}
}
void dao(int u){
    cout << u << endl;
    BFS(u);
}
void DFS(int u){
    cout << u << ' ';
    visited[u]=1;
    for(int v : ve[u]){
        if(!visited[v]){
            DFS(v);
        }
    }
}
int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            int x;
            cin >> x;
            if(x){
                ve[i].push_back(j);
                ve[j].push_back(i);
            }
        }
    }
    DFS(1);
}