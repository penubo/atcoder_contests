#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int a, b, h, m;

	cin >> a >> b >> h >> m;


	double rm = (double) 1 / 60;
	double rh = (double) 1 / 12 / 60;

	double pm = m * rm;
	double ph = ((60*h) + m) * rh;

	double dm = 2 * M_PI * pm;
	double dh = 2 * M_PI * ph;

	double x1 = a * cos(dh);
	double y1 = a * sin(dh);

	double x2 = b * cos(dm);
	double y2 = b * sin(dm);

	cout << setprecision(12) << sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2)) << "\n";



	return 0;
}