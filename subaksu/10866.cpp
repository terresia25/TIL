#include <iostream>
#include <deque>

using namespace std;

int main() {
	deque<int> dq;
	int N, X;
	cin >> N;
	string str;

	for (int i = 0; i < N; i++) {
		cin >> str;
		if (str == "push_front") {
			cin >> X;
			dq.push_front(X);
		}
		else if (str == "push_back") {
			cin >> X;
			dq.push_back(X);
		}
		else if (str == "pop_front") {
			if (dq.empty()) cout << -1 << endl;
			else {
				cout << dq.front() << endl;
				dq.pop_front();
			}
		}
		else if (str == "pop_back") {
			if (dq.empty()) cout << -1 << endl;
			else {
				cout << dq.back() << endl;
				dq.pop_back();
			}
		}
		else if (str == "size") {
			cout << dq.size() << endl;
		}
		else if (str == "empty") {
			if (dq.empty()) cout << 1 << endl;
			else cout << 0 << endl;
		}
		else if (str == "front") {
			if (dq.empty()) cout << -1 << endl;
			else {
				cout << dq.front() << endl;
			}
		}
		else {
			if (dq.empty()) cout << -1 << endl;
			else {
				cout << dq.back() << endl;
			}
		}
	}
}