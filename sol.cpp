#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	vector<int> k(n);
	for (int i = 0; i < n; i++) {
		cin >> k[i];
	}
	int mn = INT_MAX;
	for (int i = 0; i < n; i++) {
		// for every cashier, calculate the total number of seconds for each product
		// and add it to the total number of seconds to handle the change of each customer
		int total = 0;
		for (int j = 0; j < k[i]; j++) {
			int m;
			cin >> m;
			total += (5 * m);
		}
		total += (k[i] * 15);
		mn = min(mn, total);
	}
	cout << mn << '\n';
	return 0;
}
