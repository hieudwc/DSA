#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define is insert
#define all(x) (x).begin(), (x).end()
ll mod = 1e9 + 7;

int main(){
    int t; 
    cin >> t;
    while(t--){
        int s, t;
        cin >> s >> t;
        queue<pair<int,int>> q;
        pair<int,int > p;
        int visited[100005];
        memset(visited, 0, sizeof(visited));
        q.push({s,0});
        while(q.size()){
            p = q.front();
            q.pop();
            if(p.first == t){
                cout << p.second << endl;
                break;
            } 
            if(p.first <= t && !visited[p.first * 2]){
                q.push({p.first * 2, p.second + 1});
                visited[p.first * 2] = 1;
            }
            if(p.first > 1 && !visited[p.first -1]){
                q.push({p.first - 1, p.second + 1});
                visited[p.first - 1] = 1;
            }
        }
    }
}