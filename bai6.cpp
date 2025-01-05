#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, d = 0;
		cin >> n;
		queue<string> q;
		q.push("6");
		q.push("8");
		string x = "";
		while (true)
		{
			x = q.front();
			q.pop();
			if (d == n)
				break;
			cout << x;
			for (int i = x.size() - 1; i >= 0; i--)
				cout << x[i];
			cout << " ";
			q.push(x + "6");
			q.push(x + "8");
			d++;
		
		}
		cout << endl;
	}
}
