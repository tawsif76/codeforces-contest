#include <bits/stdc++.h>

using namespace std;
using LL = long long;

void solve() {
	int n, k; cin >> n >> k;
	string s; cin >> s;
	int ans = 0;
	for (int i = 0; i < n; ++i) {
		if (s[i] == 'W') continue;
		i += k - 1;
		ans++;
	}
	cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1; 
    cin >> t;
    while(t--) solve();
}
