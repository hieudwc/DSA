#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		getchar();
		string s;
		getline(cin, s);
		stringstream ss(s);
		vector<string> v;
		while (ss >> s)
			v.push_back(s);
		if (v[0].back() >= '0' && v[0].back() <= '9')
		{
			stack<long long> st;
			for (int i = 0; i < v.size(); i++)
			{
				if (v[i].back() >= '0' && v[i].back() <= '9')
					st.push(stoll(v[i]));
				else{
					long long a = st.top();
					st.pop();
					long long b = st.top();
					st.pop();
					if (v[i] == "+")
						st.push(b+a);
					else if (v[i] == "-")
						st.push(b-a);
					else if (v[i] == "*")
						st.push(b*a);
					else st.push(b/a);
				}	
			}
			cout << st.top() << endl;
		}
		else
		{
			stack<long long> st;
			for (int i = v.size() - 1; i >= 0; i--)
			{
				if (v[i].back() >= '0' && v[i].back() <= '9') 
					st.push(stoll(v[i]));
				else{
					long long a = st.top();
					st.pop();
					long long b = st.top();
					st.pop();
					if (v[i] == "+")
						st.push(b+a);
					else if (v[i] == "-")
						st.push(a-b);
					else if (v[i] == "*")
						st.push(b*a);
					else st.push(a/b);
				}
			}
			cout << st.top() << endl;
		}
	}
}
