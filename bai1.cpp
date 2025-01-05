#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string s;
		cin >> s;
		stack<int> st;
		vector<int> v;
		v.clear();
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] != '(' && s[i] != ')')
				continue;
			else{
				if (s[i] == ')' && st.size() && st.top() == '(')
				{
					st.pop();
					v.pop_back();
					continue;
				}
				else	st.push(s[i]);
			}
			v.push_back(i);
		}
		string res = "";
		for (int i = 0; i < s.size(); i++)
		{
			if (binary_search(v.begin(), v.end(), i))
				res = res + "-1";
			else if (s[i] == '(')
				res += '0';
			else if (s[i] == ')')
				res += '1';
			else
				res += s[i];
		}
		cout << res << endl;
	}
	
}
