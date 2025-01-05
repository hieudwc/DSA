#include <bits/stdc++.h>

using namespace std;

int demlienthong(const vector<vector<int>> &mtran)
{
    int n = mtran.size();
    vector<bool> tham(n, false);
    int a = 0;

    for (int i = 0; i < n; ++i)
    {
        if (!tham[i])
        {
            stack<int> stack;
            stack.push(i);
            tham[i] = true;

            while (!stack.empty())
            {
                int u = stack.top();
                stack.pop();
                for (int v = 0; v < n; ++v)
                {
                    if (mtran[u][v] && !tham[v])
                    {
                        stack.push(v);
                        tham[v] = true;
                    }
                }
            }
            a++;
        }
    }
    return a;
}

int demdinh(const vector<vector<int>> &mtran)
{
    int dem = 0;
    int n = mtran.size();
    for (int i = 0; i < n; ++i)
    {
        int a = 0;
        for (int j = 0; j < n; ++j)
        {
            a += mtran[i][j];
        }
        if (a % 2 != 0)
        {
            dem++;
        }
    }
    return dem;
}

void timchutrinh(vector<vector<int>> &mtran, vector<int> &eler, int u)
{
    int n = mtran.size();
    for (int v = 0; v < n; ++v)
    {
        if (mtran[u][v])
        {
            mtran[u][v] = mtran[v][u] = 0;
            timchutrinh(mtran, eler, v);
        }
    }
    eler.push_back(u);
}

int main()
{
    ifstream inFile("CT.INP");
    ofstream outFile("CT.OUT");
    int t, n, u;
    inFile >> t;

    if (t == 1)
    {
        inFile >> n;

        vector<vector<int>> mtran(n, vector<int>(n));
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                inFile >> mtran[i][j];
            }
        }

        int demdinha = demdinh(mtran);
        int lienthong = demlienthong(mtran);

        if ((demdinha == 0 || demdinha == 2) && lienthong == 1)
        {
            if (demdinha == 0)
            {
                outFile << "1";
            }
            else
            {
                outFile << "2";
            }
        }
        else
        {
            outFile << "0";
        }
    }
    else if (t == 2)
    {
        inFile >> n >> u;

        vector<vector<int>> matran(n, vector<int>(n));
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                inFile >> matran[i][j];
            }
        }

        vector<int> eler;
        timchutrinh(matran, eler, u - 1);
        for (int i = eler.size() - 1; i >= 0; --i)
        {
            outFile << eler[i] + 1 << " ";
        }
    }
    inFile.close();
    outFile.close();
    return 0;
}