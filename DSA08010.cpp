#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define is insert
#define all(x) (x).begin(), (x).end()
ll mod = 1e9 + 7;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        map<int,int> visited;
        queue<pair<int,int>> q;
        pair<int,int> tmp;
        q.push({n,0});
        while(q.size()){
            tmp = q.front();
            q.pop();
            if(tmp.first == 1){
                cout << tmp.second << endl;
                break;
            }
            if(tmp.first >= 1 && !visited[tmp.first - 1]){
                q.push({tmp.first - 1, tmp.second + 1});
                visited[tmp.first - 1]++;
            }
            for(int i = 2; i <= sqrt(tmp.first); i++){
                if(tmp.first % i == 0 && !visited[tmp.first / i]){
                    q.push({tmp.first / i, tmp.second + 1});
                    visited[tmp.first / i]++;
                }
            }
        }
    }
}