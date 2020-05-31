#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int k;
	string s;

	cin >> k >> s;

	if (s.length() > k) {
		for (int i = 0; i < k; i++)
			cout << s[i];
		cout << "...\n";
	} else {
		cout << s << "\n";
	}

	return 0;
}