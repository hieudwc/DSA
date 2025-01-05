#include<iostream>
#include<vector>
#include<cstring>
using namespace std;
int n, k, a[1001];
vector<int>adj[1000];
int visited[1000];
void BackTrack(int i, int st){
   for(int v : adj[st]){
       if(i==n+1 && v==k){
           for(int j = 1; j <= n;j++){
               cout << a[j] << ' ';
           }
           cout << k << endl;
       }
       else if(!visited[v]){
           visited[v]=1;
           a[i]=v;
           BackTrack(i+1,v);
           visited[v]=0;
       }
   }
}
int main(){
    cin >> n >> k;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            int x;
            cin >> x;
            if(x){
                adj[i].push_back(j);
            }
        }
    }
    a[1]=k;
    visited[k]=1;
   BackTrack(2,k);
}