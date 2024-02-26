#include <iostream>

using namespace std;

int main() {
	int N, p=0, q=0;
	cin >> N;

	p = N / 4;
	q = N % 4;

	if (q != 0) {
		p++;
	}

	for (int i = 0; i < p; i++) {
		cout << "long ";
	}
	cout << "int";
}