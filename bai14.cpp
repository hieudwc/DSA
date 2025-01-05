#include<bits/stdc++.h>
using namespace std;

void cay(vector<int> tree, int i, int n){
	if(i >= n) return;

	cay(tree, 2*i + 1, n);
	cout << tree[i] << " ";
	cay(tree, 2*i + 2, n);
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int> tree(n);
		for(int i = 0; i < n; i++)
		cin >> tree[i];
		cay(tree, 0, n);
		cout << endl;
	}
}