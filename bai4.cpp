#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, q;
	cin >> n >> q;
	vector<int> a(n), b(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];
		
		stack<int> st;
		for (int i = n - 1; i >= 0; i--)
		{
			while (!st.empty() && st.top() <= a[i])
			{
				st.pop();
			}
			if (st.empty())
				b[i] = 0;
			else
				b[i] = st.size();
			st.push(a[i]);
		}
	int k;
	while (q--)
	{
		cin >> k;
		cout << b[k-1] << endl;
	}
}
