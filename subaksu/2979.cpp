#include <iostream>

using namespace std;

int A, B, C;
int a[100];
int money = 0;

int main() {
	int tmp1, tmp2;

	cin >> A >> B >> C;
	for (int i = 0; i < 3; i++) {
		cin >> tmp1 >> tmp2;;
		for (int k = tmp1; k < tmp2; k++) {
			a[k]++;
		}
	}

	for (int i = 1; i < 100; i++) {
		if (a[i] == 1) {
			money = money + A;
		}
		else if (a[i] == 2) {
			money += B * 2;
		}
		else if (a[i] == 3) {
			money += C * 3;
		}
		else {
		}
	}

	cout << money;
}