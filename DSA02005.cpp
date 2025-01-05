#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define is insert

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int n = s.size();
        int a[n+1];
        for(int i = 1; i <= n; i++)
        a[i]=i;
        while(1){
            int ok = 0;
            for(int i = 1; i <= n; i++){
                cout << s[a[i]-1];
            }
            cout << ' ';
            for(int i = n - 1; i >= 1; i--){
                if(a[i]<a[i+1]){
                    ok = 1;
                    sort(a+i+1,a+n+1);
                    for(int j = i + 1; j <= n; j++){
                        if(a[j]>a[i]){
                            swap(a[i],a[j]);
                            break;
                        }
                    }
                    break;
                }
            }
            if(ok==0) break;
        }
        cout << endl;
    }
}
// string s;
// int a[1000], dd[1000] = {};
// void Try(int n)
// {
//     for (int i = 0; i < s.size(); i++)
//     {
//         if (!dd[i])
//         {
//             a[n] = i;
//             dd[i] = 1;
//             if (n == s.size() - 1)
//             {
//                 for (int i = 0; i < s.size(); i++)
//                     cout << s[a[i]];
//                 cout << " ";
//             }
//             else
//                 Try(n + 1);
//             dd[i] = 0;
//         }
//     }
// }
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         cin >> s;
//         Try(0);
//         cout << endl;
//     }
// }