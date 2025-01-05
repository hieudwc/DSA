#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define is insert

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int min = 1e9;
        for(int i = 0; i < s.size()-1; i++){
            int tmp = 0;
                for(int j = i; j < s.size(); j++){
                    if(s[j]!=s[j+1]) tmp++;
                }
            if(tmp < min) min = tmp;
        }
        cout << min << endl;
    }
}