#include <bits/stdc++.h>

using namespace std;

int main() {

	int n;
	cin >> n;
	cout << (n % 1000 == 0 ? 0 : 1000 - (n % 1000)) << "\n";

	return 0;
}