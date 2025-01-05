#include<iostream>
#define max 100
using namespace std;
class Graph{
    public:
    int n, chuaxet[max], a[max][max];
    void readdata();
    void init();
    void dfs(int u);
};
void Graph::readdata(){
    cin >> n;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++) cin >> a[i][j];
}
void Graph::init(){
    for(int i = 1; i <= n; i++) chuaxet[i]=1;
}
void Graph::dfs(int u){
    cout << u << ' ';
    chuaxet[u]=0;
    for(int v = 1; v <= n; v++)
        if(a[u][v] && chuaxet[v])
            dfs(v);
}
int main(){
    Graph g;
    g.readdata();
    g.init();
    g.dfs(1);
}