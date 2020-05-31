#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string s;
	getline(cin, s);

	char c = *(s.end() - 1);
	if (c == '3') {
		cout << "bon\n";
	} else if (c == '0' || c == '1' || c == '6' || c == '8') {
		cout << "pon\n";
	} else {
		cout << "hon\n";
	}

	return 0;
}