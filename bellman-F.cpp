#include<iostream>
#include<vector>
#include<queue>

using namespace std;
int n, fi;
vector<pair<int, int>> adj[20];
int pre[20];
void Ford(){
    cin >> n >> fi;
    int a[20][20];
    for(int i = 1; i<= n; i++){
        for(int j = 1;j <= n; j++){
            cin >> a[i][j];
        }
    }
    int d[20];
    for(int i = 1; i <= n; i++){
        d[i] = 1e9;
    }
    d[fi] = 0;
    int t = n-2;
    while(t--){
        for(int i = 1; i <= n; i++){
            if(i != fi){
                for(int j = 1; j <= n; j++){
                    if(a[j][i] != 0){
                        if(d[i] > d[j] + a[j][i]){
                            d[i] = d[j] + a[j][i];
                            pre[i] =j;
                        }
                    }
                }
            }
        }
    }
    for(int i = 1; i<= n;i++){
        string s="K/c ";
        s = s+to_string(fi)+" -> ";
        s = s + to_string(i) + " = ";
        if(d[i] == 1e9){
            s = s + "INF";
            cout << s << endl;
        } else {
            s = s + to_string(d[i]);
            int t = 23 - s.size();
        for(int i = 1; i<= t; i++){
            s = s+" ";
        }
        cout << s;
        int tmp = i;
        while(1){
            cout << tmp;
            if(tmp != fi) cout << " <- ";
            if(tmp == fi) break;
            tmp = pre[tmp];
        }
        if(i == fi) cout << " <- "<< fi;
        cout << endl;
        }
        
    }
    
}

int main(){
    Ford();
    return 0;
}