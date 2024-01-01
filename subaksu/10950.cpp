#include <iostream>

using namespace std;
int num, tmp1, tmp2;

int main() {
	cin >> num;;

	for (int i = 0; i < num; i++) {
		cin >> tmp1 >> tmp2;
		cout << tmp1 + tmp2 << endl;
	}
}