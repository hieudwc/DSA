#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define is insert
#define all(x) (x).begin(), (x).end()

int ok = 0;
int binarySearch(int a[], int n, int k){
    int l = 0, r = n - 1, mid;
    while(l <= r){
        mid = l + (r - l)/2;
        if(a[mid] == k){
           return mid;
        }
        else if(a[mid] > k) r = mid - 1;
        else l = mid + 1;
    }
    return -1;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int a[n];
        for(int i = 0; i < n; i++)
            cin >> a[i];
        if(binarySearch(a,n,k)>0) cout << binarySearch(a,n,k)+1<< endl;
        else cout << "NO" << endl;
    }
}