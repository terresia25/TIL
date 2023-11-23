#include <iostream>
#include <stack>

using namespace std;

int arr[1000001];

int main() {
	int N;
	stack<int> st;

	cin >> N;

	for (int i = 0; i < N; i++) {
		int tmp;
		cin >> tmp;
		arr[i] = tmp;

		while (1) {
			if (st.empty()) {
				st.push(i);
				break;
			}
			int idx = st.top();
			if (tmp > arr[idx]) {
				arr[idx] = tmp;
				st.pop();
			}
			else {
				st.push(i);
				break;
			}
		}
	}

	while (!st.empty()) {
		int idx = st.top();
		arr[idx] = -1;
		st.pop();
	}

	for (int j = 0; j < N; j++) {
		cout << arr[j] << ' ';
	}
}