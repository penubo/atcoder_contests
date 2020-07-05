#include <bits/stdc++.h>

using namespace std;

const long long rem = 1e9+7;

int main() {

	int n, k;
	cin >> n >> k;

	vector<long long> pos;
	vector<long long> neg;

	for (int i = 0; i < n; i++) {
		long long x;
		cin >> x;
		if (x >= 0) pos.push_back(x);
		else neg.push_back(x);
	}

	sort(pos.begin(), pos.end());
	sort(neg.begin(), neg.end());


	int limit = min((int)neg.size(), k);

	long long ans = -INT64_MAX;
	for (int i = 0; i <= limit; i++) {
		int p = k - i;
		long long tsum = 1;
		if (i % 2 == 0) {
			for (int j = pos.size() - 1; j >= 0 && j > pos.size() - p; --j)
				tsum *= pos[j];
			for (int j = neg.size() - 1; j >= 0 && j > neg.size() - i; --j)
				tsum *= neg[j];
		} else {
			for (int j = 0; j < pos.size() && j < p; ++j)
				tsum *= pos[j];
			for (int j = 0; j < neg.size() && j < i; ++j)
				tsum *= neg[j];
		}
		cout << i  << " " << tsum << "\n";
		ans = max(ans, tsum);
	}

	cout << ans << "\n";

	return 0;
}