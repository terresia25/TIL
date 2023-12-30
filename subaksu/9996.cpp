#include <iostream>
#include <string>

using namespace std;

int N;
string str, temp, pre, suf;

int main() {
	cin >> N;
	cin >> str;

	int pos = str.find('*');
	pre = str.substr(0, pos);
	suf = str.substr(pos + 1);

	for (int i = 0; i < N; i++) {
		cin >> temp;
		if (pre.size() + suf.size() > temp.size()) {
			cout << "NE" << endl;
		}
		else {
			if (pre == temp.substr(0, pre.size()) && suf == temp.substr(temp.size() - suf.size()))cout << "DA" << endl;
			else cout << "NE" << endl;
		}
	}

	return 0;
}