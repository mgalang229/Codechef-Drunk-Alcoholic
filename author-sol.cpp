#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int k;
		cin >> k;
		// observe the sequence carefully and you will see this pattern:
		// if k is even, then the answer is k itself
		// if k is odd, then the answer is always (k + 2)
		cout << (k % 2 == 0 ? k : k + 2) << '\n';
	}
	return 0;
}
