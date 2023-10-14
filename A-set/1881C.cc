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

const int MAXN = 1010;
int n;
string A[MAXN];

int solve() {
	int ans = 0;
	
	for (int i = 0; i * 2 < n; i++) {
		for (int j = 0; j * 2 < n; j++) {
			vector<char> M {A[i][j], A[n - 1 - j][i], A[n - 1 - i][n - 1 - j], A[j][n - 1 - i]};
			char c = *max_element(M.begin(), M.end());
			for (char e : M) {
				ans += c - e;
			}
		}
	}
	return ans;
}

int main() {
	ios::sync_with_stdio(false);
#ifndef PI_DEBUG
	cin.tie(nullptr);
#endif

	int tests;
	cin >> tests;

	while (tests--) {
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> A[i];
		}
		cout << solve() << endl;
	}

	return 0;
}

