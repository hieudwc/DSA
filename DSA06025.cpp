#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define is insert
void insertionSort(int a[], int n){
    for(int i = 0; i < n; i++){
        int x = a[i];
        int pos = i - 1;
        while(pos >= 0 && a[pos]>x){
            a[pos+1]=a[pos];
            pos--;
        }
        a[pos+1]=x;
        cout << "Buoc " << i << ": ";
        for(int j = 0; j <= i; j++)
            cout << a[j] << ' ';
        cout << endl;
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) 
        cin >> a[i];
    insertionSort(a,n);
}