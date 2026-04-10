#include <bits/stdc++.h>
using namespace std;

int n;
vector<vector<int>> adj;

int dfs(int node) {
    int depth = 1;

    for (int child : adj[node]) {
        depth = max(depth, 1 + dfs(child));
    }

    return depth;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    adj.resize(n + 1);

    vector<int> roots;

    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;

        if (x == -1) {
            roots.push_back(i);
        } else {
            adj[x].push_back(i);
        }
    }

    int deepest = 0;

    for (int root : roots) {
        deepest = max(deepest, dfs(root));
    }

    cout << deepest << "\n";

    return 0;
}