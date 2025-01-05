#include<bits/stdc++.h>
using namespace std;
bool check(string a){
    if(a.size()<6) return 0;
    if(a[0]!='8'|| a[a.size()-1]!='6') return 0;
    for(int i = 0; i < a.size(); i++){
        if(a[i]=='8'&&a[i+1]=='8') return 0;
        if(a[i]=='6'&& a[i+1]=='6'&& a[i+2]=='6'&& a[i+3]=='6') return 0;
    }
    return 1;
}
int main(){
    int n;
    cin >> n;
    string s="";
    for(int i = 1; i <= n; i++) s+='6';
    while(1){
        if(check(s)) cout << s << endl;
        int ok = 0;
        for(int i = s.size()-1; i >= 0; i--) {
            if(s[i]=='6') {
                s[i]='8';
                ok = 1;
                for(int j = i + 1; j < s.size(); j++)
                s[j]='6';
                break;
            }
        }
        if(ok==0) break;
    }
}