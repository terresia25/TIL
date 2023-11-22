#include <iostream>
#include <stack>

int main() {
	std::string s;
	std::cin >> s;
	std::stack<char> st;
	int ans = 0;

	for (int i = 0; i < s.length(); i++) {
		if (s[i] == '(') {
			st.push(s[i]);
		}
		else { // ')'�� ���
			if (s[i - 1] == '(') {// ()�̸� ��������
				st.pop();
				ans += st.size();
			}
			else {
				st.pop();
				ans++;
			}
		}
	}
	std::cout << ans;
}