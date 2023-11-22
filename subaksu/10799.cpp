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
		else { // ')'인 경우
			if (s[i - 1] == '(') {// ()이면 레이저임
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