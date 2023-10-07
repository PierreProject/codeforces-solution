#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;

// Function to calculate the greatest common divisor (GCD) using Euclidean algorithm
int gcd(int a, int b) {
	if (b == 0)
		return a; 
	return gcd(b, a % b);
}

void solve() {
	int Y, W;
	cin >> Y >> W;

	int max_roll = max(Y, W);
	int favorable_outcomes = 6 - max_roll + 1;	// Number of outcomes where Dot wins

	int common_divisor = gcd(favorable_outcomes, 6);

	int numerator = favorable_outcomes / common_divisor;
	int denominator = 6 / common_divisor;

	cout << numerator << '/' << denominator << endl;
}

int main() {
	ios::sync_with_stdio(false);
#ifndef PI_DEBUG
 	cin.tie(nullptr);
#endif

 	solve();
 	return 0;
}

