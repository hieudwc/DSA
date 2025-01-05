#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define is insert

int n;
int xuoi[100], nguoc[100], a[100];
int s = 0;
void Try(int i){
    for(int j = 1; j <= n; j++){
        if(!a[j] && !xuoi[i-j+n] && !nguoc[i+j-1]){
            a[j]=1;
            xuoi[i-j+n]=1;
            nguoc[i+j-1]=1;
            if(n==i){
            s++;
            }
            else Try(i+1);
            a[j]=0;
            xuoi[i-j+n]=0;
            nguoc[i+j-1]=0;
        }
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        Try(1);
        cout << s << endl;
        s=0;
    }
}
