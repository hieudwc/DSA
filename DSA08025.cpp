#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define is insert
#define all(x) (x).begin(), (x).end()
ll mod = 1e9 + 7;

int c[10][10];
pair <int, int> p[8] = {{-2, -1}, {-2, 1}, {-1, 2}, {1, 2}, {2, 1}, {2, -1}, {1, -2}, {-1, -2}};

void BFS(pair<int, int> a, pair<int, int> b){
    if(a == b){
        cout << 0 << endl;
        return;
    }
    memset(c, -1, sizeof(c));
    queue <pair<int, int> > q;
    q.push(a);
    c[a.first][a.second] = 0;
    while(1){
        pair<int, int> tmp = q.front();
        q.pop();
        for(int i = 0; i < 8; i++){
            int x = tmp.first + p[i].first;
            int y = tmp.second + p[i].second;
            if(x >= 1 && x <= 8 && y >= 1 && y <= 8 && c[x][y] == -1){
                q.push({x, y});
                c[x][y] = c[tmp.first][tmp.second] + 1;
            }
        }
        if(c[b.first][b.second] != -1) break;
    }
    cout << c[b.first][b.second] << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        string s1, s2;
        cin >> s1 >> s2;
        pair<int, int > a,b;
        a.first = s1[0] - 'a' + 1;
        a.second = s1[1] - '0';
        b.first = s2[0] - 'a' + 1;
        b.second = s2[1] - '0';
        BFS(a, b);
    }
}