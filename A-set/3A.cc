#include <iostream>
#include <string>
using namespace std;

void run_case() {
	string s, t;	// src -> target
	cin >> s >> t;

	int col_diff = t[0] - s[0]; 
	int row_diff = t[1] - s[1];

	int moves = max(abs(col_diff), abs(row_diff));

	cout << moves << endl;

	for (int i = 0; i < moves; i++) {
		string move = "";
		if (col_diff > 0) {
			move += "R";
			col_diff--;
		} else if (col_diff < 0) {
			move += "L";
			col_diff++;
		}
		if (row_diff > 0) {
			move += "U";
			row_diff--;
		} else if (row_diff < 0) {
			move += "D";
			row_diff++;
		} 
		cout << move << endl;
	}
}

int main() {
	ios::sync_with_stdio(false);
#ifndef PI_DEBUG
	cin.tie(nullptr);
#endif
	run_case();
	return 0;
}

