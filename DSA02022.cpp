#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define is insert
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<string> a1 = {"02", "20", "22"};
    vector<string> a2 = {"02"};
    vector<string> a3 = {"2000", "2002", "2020", "2022", "2200", "2202", "2220", "2222"};
    for (int i = 0; i < a1.size(); i++)
        for (int j = 0; j < a2.size(); j++)
            for (int k = 0; k < a3.size(); k++)
                cout << a1[i] + "/" + a2[j] + "/" + a3[k] << endl;
}