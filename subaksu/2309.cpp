#include <iostream>
#include <algorithm>

using namespace std;

int a[9];
int n = 9, r = 7;

void forPrint() {
	int sum = 0;
	for (int i = 0; i < r; i++) {
		sum += a[i];
	}

	if (sum == 100) {
		sort(a, a + 7);
		for (int i = 0; i < r; i++) {
			cout << a[i] << endl;
		}
		exit(0);//exit하게 되면 solve만 종료시키는 return과 달리 main 자체도 정리되버림!
	}
}

void makePermutation(int n, int r, int depth) {
	if (r == depth) {
		forPrint();
		return;
	}
	for (int i = depth; i < n; i++) {
		swap(a[i], a[depth]);
		makePermutation(n, r, depth + 1);
		swap(a[i], a[depth]);
	}

	return;
}

int main() {
	for (int i = 0; i < 9; i++) {
		cin >> a[i];
	}
	makePermutation(n, r, 0);
	return 0;
}