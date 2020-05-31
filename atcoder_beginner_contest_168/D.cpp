#include <bits/stdc++.h>

using namespace std;

bool visited[100001];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, m, x, y;
	cin >> n >> m;
	vector<int> adj[n+1];

	for (int i = 0; i < m; i++) {
		cin >> x >> y;
		adj[y].push_back(x);
		adj[x].push_back(y);
	}

	int distance[n+1];
	for (int i = 0; i < n+1; i++) {
		distance[i] = 1000000;
	}
	
	priority_queue<pair<int, int>> pq;
	pq.push({0, 1});
	distance[1] = 0;

	while (!pq.empty()) {
		int a = pq.top().second;
		pq.pop();

		if (visited[a]) continue;

		visited[a] = true;

		for (auto b : adj[a]) {
			if (distance[a] + 1 < distance[b]) {
				distance[b] = distance[a] + 1;
				pq.push({-1, b});
			}
		}
	}

	bool flag = true;
	for (int i = 2; i <= n; i++) {
		if (distance[i] == 1000000) {
			flag = false;
			break;
		}
	}

	if (flag) {
		cout << "Yes\n";
		for (int i = 2; i <= n; i++) {
			cout << distance[i] << "\n";
		}
	} else {
		cout << "No\n";
	}

	return 0;
}