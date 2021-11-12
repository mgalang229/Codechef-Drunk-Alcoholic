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
		// divide the no. of even and odd numbers from 1 to n
		int n = (k + 1) / 2;
		int ans = 0;
		if (k & 1) {
			// if k is odd, then we need to get the n-th number
			// in the arithmetic progression of odd numbers
			// note: add 1 to n since we will skip 1
			n = n + 1;
			ans = 2 * n - 1;
		} else {
			// if k is even, then we need to get the n-th number
			// in the arithmetic progression of even numbers
			// note: basically the n-th multiple of 2
			ans = 2 * n;
		}
		cout << ans << '\n';
	}
	return 0;
}
