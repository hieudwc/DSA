#include<bits/stdc++.h>
using namespace std;

class Find{
    public: 
    unordered_map<int,int> pr;
    Find(){};
    int find(int x){
        if(pr.find(x)==pr.end())
            pr[x] = x;
        if(pr[x]!=x)
            pr[x] = find(pr[x]);
        return pr[x];
    }
    void union_(int x,int y){
        int px = find(x);
        int py = find(y);
        if(px!=py)
            pr[px] = py;
    }
};

int main(){
    int q;
    cin >> q;
    Find f;
    while(q--){
        int x,y,z;
        cin >> x >> y >> z;
        if(z == 1){
            f.union_(x, y);
        }
        else if(z == 2){
            if(f.find(x) == f.find(y))
            cout << 1 << endl;
            else 
            cout << 0 << endl;
        }
    }
}