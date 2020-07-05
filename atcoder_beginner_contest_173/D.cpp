#include <bits/stdc++.h>

using namespace std;

int main() {

	int n;

	cin >> n;
	vector<long long> arr(n);
	while (n--) {
		cin >> arr[n];
	}

	sort(arr.rbegin(), arr.rend());

	deque<long long> queue;
	long long ans = 0;
	queue.push_back(arr[0]);
	for (int i = 1; i < arr.size(); i++) {
		long long biggest = queue.front(); queue.pop_front();
		ans += biggest;
		long long new_space = min(arr[i], biggest);
		queue.push_back(new_space);
		queue.push_back(new_space);
	}
	cout << ans << "\n";

	return 0;
}