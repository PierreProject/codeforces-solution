#include <iostream>
using namespace std;

void run_case() {
	int n, d;
	cin >> n >> d;
	int a[n];
	int ans = 0;
	
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}

	for (int i = 1; i < n; ++i) {
		if (a[i] <= a[i - 1]) {
			long long tmp = a[i - 1] - a[i] + 1;
			if (tmp % d == 0) {
				ans += tmp / d;
				a[i] += tmp;
			} else {
				ans += (tmp / d + 1);
				a[i] += (tmp / d + 1) * d;
			}
		}
	}

	cout << ans;
}

int main() {
	ios::sync_with_stdio(false);
#ifndef PI_DEBUG
	cin.tie(nullptr);
#endif
	run_case();
	return 0;
}

