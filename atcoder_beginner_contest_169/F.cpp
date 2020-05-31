#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);


	int n, s, x;
	int cnt = 0;
	cin >> n >> s;
	int arr[n+1];
	bool possible[s+1][n+1];
	memset(possible, 0, (n+1)*(s+1));
	possible[0][0] = true;
	for (int i = 1; i <= n; i++) {
		cin >> x;
		arr[i] = x;
	}

	for (int k = 1; k <= n; k++) {
		for (int x = 0; x <= s; x++) {
			if (x - arr[k] >= 0) possible[x][k] |= possible[x-arr[k]][k-1];
			possible[x][k] |= possible[x][k-1];
		}
	}
	for (int k = 1; k <= n; k++) {
		for (int x = 0; x <= s; x++) {
			cout << possible[x][k];
		}cout << "\n";
	}
	cout << cnt << "\n";
}
