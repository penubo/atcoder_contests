#include <bits/stdc++.h>


using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;

	vector<long long> a(n), b(n);
	for (int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		a[i] = x; b[i] = y;
	}
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());

	long long ret;

	if (n % 2 == 1) {
		ret = b[n / 2] - a[n / 2] + 1;
	} else {
		ret = b[n / 2 - 1] + b[n / 2] - (a[n / 2 - 1] + a[n / 2]) + 1;
	}
	cout << ret << "\n";

}
