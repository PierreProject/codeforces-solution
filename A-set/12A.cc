#include <iostream>
using namespace std;

void run_case() {
	char symbols[3][3];
	cin >> symbols[0] >> symbols[1] >> symbols[2];
	cout << (symbols[0][0] == symbols[2][2] && symbols[0][1] == symbols[2][1]
		&& symbols[0][2] == symbols[2][0] && symbols[1][0] == symbols[1][2]
		? "YES\n" : "NO\n");
}

int main() {
	ios::sync_with_stdio(false);
#ifndef PI_DEBUG
	cin.tie(nullptr);
#endif
	run_case();
	return 0;
}

