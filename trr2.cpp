#include<bits/stdc++.h>
using namespace std;


#define int long long
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

int n, s, t;
int a[200][200];

void nhap() {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> a[i][j];
		}
	}
}
main() {
	freopen("DN.INP", "r", stdin);
	freopen("DN.OUT", "w", stdout);

	cin >> n >> s >> t;

	nhap();

	vector<int> dist(n + 1, 1e9);
	vector<int> prev(n + 1, -1);

	dist[s] = 0;

	for (int i = 1; i <= n; i++) {
		for (int u = 1; u <= n; u++) {
			for (int v = 1; v <= n; v++) {
				if (dist[u] + a[u][v] < dist[v]) {
					dist[v] = dist[u] + a[u][v];
					prev[v] = u;
				}
			}
		}
	}

	bool check = false;
	for (int i = 1; i <= n; i++) {
		for (int u = 1; u <= n; u++) {
			for (int v = 1; v <= n; v++) {
				if (dist[u] + a[u][v] < dist[v]) {
					check = true;
				}
			}
		}
	}

	if (check) {
		cout << -1 << endl;
	}
	else {
		cout << dist[t] << endl;

		vector<int> path;
		int cur = t;
		while (cur != s) {
			path.push_back(cur);
			cur = prev[cur];
		}

		path.push_back(s);

		reverse(path.begin(), path.end());
		for (int i = 0; i < path.size(); i++) {
			cout << path[i] << " ";

		}

		cout << endl;
	}

	return 0;
}