#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	unsigned long long x;
	cin >> n;

	unsigned long long ans = 1;
	bool flag = false;

	for (int i = 0; i < n; i++) {
		cin >> x;
		if (x == 0) {
			flag = false;
			ans = 0;
			break;
		}
		if (ans > (unsigned long long)1e18 / x)
			flag = true;
		ans *= x;
	}

	if (flag) {
		cout << -1 << "\n";
	}
	else
		cout << ans << "\n";


}
