#include<iostream>
#include<vector>

using namespace std;
int n, k;
int a[20][20];
vector<int> adj[20];
bool used[20];

void nhap(){
    cin >> n >> k;
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