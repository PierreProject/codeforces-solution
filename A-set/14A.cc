#include <algorithm>
#include <array>
#include <bitset>
#include <cassert>
#include <chrono>
#include <cmath>
#include <cstring>
#include <functional>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <random>
#include <set>
#include <vector>
using namespace std;

void run_case() {
	int i, j, n, m;	// lines, cols
	char s[51][51];
	while (cin >> n >> m) {
		for (i = 0; i < n; i++) {
			for (j = 0; j < m; j++) {
				cin >> s[i][j];
			}
		}

		int mn_i = i, mn_j = j, mx_i = -1, mx_j = -1;
		for (i = 0; i < n; i++) {
			for (j = 0; j < m; j++) {
				if(s[i][j] == '*') {
					if (i < mn_i) mn_i = i;
					if (i > mx_i) mx_i = i;
					if (j < mn_j) mn_j = j;
					if (j > mx_j) mx_j = j;
				}
			}
		}
		for (i = mn_i; i <= mx_i; i++) {
			for (j = mn_j; j <= mx_j; j++) {
				cout << s[i][j];
			}
			cout << endl;
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
#ifndef PI_DEBUG
	cin.tie(nullptr);
#endif

	run_case();
	// int tests;
	// cin >> tests;

	// while (tests--) {
	// 	run_case();
	// }

	return 0;
}

