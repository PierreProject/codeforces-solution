#include <iostream>
using namespace std;

void run_case() {
	int w;
	cin >> w;

	if (w % 2 == 0 && w > 2) {
		cout << "YES" << '\n';
	} else cout << "NO" << '\n';
}

int main() {
	ios::sync_with_stdio(false);
#ifndef PI_DEBUG
	cin.tie(nullptr);
#endif
	run_case();
	return 0;
}

