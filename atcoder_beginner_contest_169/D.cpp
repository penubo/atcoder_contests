#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	long long n;
	cin >> n;

	vector<pair<long long, long long>> arr;
	
	for (long long i = 2; i * i <= n; ++i) {
		if (n % i == 0) {
			long long cnt = 0;
			while (n % i == 0) {
				n /= i;
				cnt++;
			}
			arr.push_back({i, cnt});
		}
	}
	if (n > 1) {
		arr.push_back({n, 1});
	}

	int ret = 0;
	for (auto a : arr) {
		long long cnt = 0, sum = 0;
		for (int i = 1; sum + i <= a.second; ++i) {
			sum += i;
			++cnt;
		}
		ret += cnt;
	}
	cout << ret << "\n";

}
