#include <bits/stdc++.h>

using namespace std;

#define ll long long




void solve() {	
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int mn = 1e9;
		int ans = -1;
		for(int i = 1; i <= n; i++) {
			int x;
			cin >> x;
			if(x < mn) {
				mn = x;
				ans = i;
			}
		}
		cout << ans << "\n";
	}	
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	solve();

	return 0;
}