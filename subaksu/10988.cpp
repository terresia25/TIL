#include <iostream>
#include <algorithm>

using namespace std;

string str,tmp;

int main() {
	cin >> str;
	tmp = str;
	reverse(str.begin(), str.end());
	if (tmp == str) {
		cout << 1 << endl;
	}
	else {
		cout << 0 << endl;
	}

	return 0;
}