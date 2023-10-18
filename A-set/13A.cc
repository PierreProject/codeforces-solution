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

int gcd(int m, int n) {
	int r = m % n;
	while (r != 0) {
		m = n;
		n = r;
		r = m % n;
	}
	return n;
}

void run_case() {
	int A;
	cin >> A;
	int X(0), Y(A - 2);
	for (int base = 2; base < A; ++base) {
		int n(A), ds(0);
		while (n != 0) {
			ds += n % base;
			n /= base;
		}
		X += ds;
	}

	int _gcd = gcd(X, Y);
	X /= _gcd;
	Y /= _gcd;
	cout << X << '/' << Y;
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

