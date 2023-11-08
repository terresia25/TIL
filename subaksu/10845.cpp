#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main() {
	int N, num;
	cin >> N;
	char temp_for_order;
	queque<int> que;

	for (int i = 0; i < N; i++) {
		cin >> temp_for_order >> num;
		if (num != NULL) {
			if (temp_for_order.find(push) == string::npos) {
				que.push(num);
				int tmp= que.push(num);
				cout << tmp << endl;
			}
		}
		if (temp_for_order == 'pop') {
			que.front();
			int tmp_front= que.front();
			cout << tmp_front << endl;
			que.pop();
		}
		if (temp_for_order == 'size') cout << que.size() <<endl;
		if (temp_for_order == 'front' && que.empty() == true) cout << "-1" << endl;
		if (temp_for_order == 'front' && que.empty() == false) {
			que.front();
			int tmp_front2 = que.front();
			cout << tmp_front2 << endl;
		}
		if (temp_for_order == 'back' && que.empty() == true) cout << "-1" << endl;
		if (temp_for_order == 'back' && que.empty() == false) {
			que.back();
			int tmp_front = que.back();
			cout << back << endl;
		}
	}

}