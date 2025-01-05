#include <bits/stdc++.h>

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
    deque<int> q;
    while(t--){
        string s;
        cin >> s;
        if(s == "PUSHFRONT"){
            int x; cin >> x;
            q.push_front(x);
        }
        else if(s == "PRINTFRONT"){
            if(q.empty()){
                cout << "NONE" << endl;
            }
            else{
                cout << q.front() << endl;
            }
        }
        else if(s == "POPFRONT"){
            if(!q.empty()){
                q.pop_front();
            }
        }
        else if(s == "PUSHBACK"){
            int y; cin >> y;
            q.push_back(y);
        }
        else if(s == "PRINTBACK"){
            if(q.empty()){
                cout << "NONE" << endl;
            }
            else{
                cout << q.back() << endl;
            }
        }
        else if(s == "POPBACK"){
            if(!q.empty()){
                q.pop_back();
            }
        }
    }
}