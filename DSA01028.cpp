#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    int a[k+1];
    set<int> s;
    vector<int> v;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        s.insert(x);
    }
    v.push_back(0);
    for(auto i:s) v.push_back(i);
    n = v.size()-1;
    for (int i = 1; i <= k; i++)
        a[i] = i;
    while (1)
    {
        for (int i = 1; i <= k; i++)
            cout << v[a[i]] << " ";
        cout << endl;
        int ok = 0;
        for (int i = k; i >= 1; i--)
        {
            if (a[i] != n - k + i)
            {
                ok = 1;
                a[i]++;
                for (int j = i + 1; j <= k; j++)
                    a[j] = a[j - 1] + 1;
                break;
            }
        }
        if (ok == 0)
            break;
    }
}