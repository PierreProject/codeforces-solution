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
	// Read input values
	long long n, m, a;
	cin >> n >> m >> a;

	// Calculate the number of flagstones needed for the length and width
	long long flagstones_length = ceil((double)n / a);
	long long flagstones_width = ceil((double)m / a);

	// Calculate the total number of flagstones required
	long long total_flagstones = flagstones_length * flagstones_width;

	cout << total_flagstones << '\n';
}

int main() {
	ios::sync_with_stdio(false);
#ifndef PI_DEBUG
	cin.tie(nullptr);
#endif
	run_case();
	return 0;
}

