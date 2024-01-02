#include <iostream>
#include <algorithm>

using namespace std;

int a[100000], n, k, temp;
int ret = -1000000;

int main() {
	cin >> n >> k;

	for (int i = 1; i <= n; i++) {
		cin >> temp;
		a[i] = a[i - 1] + temp;
	}

	for (int i = k; i <= n; i++) {
		ret = max(ret, a[i] - a[i - k]);
	}

	cout << ret << endl;

}
