#include <iostream>
#include<string>

int circ(int N) {
	int count = 0, title = 666;
	std::string t;

	while (true) {
		t = std::to_string(title);
		for (int k = 0; k < t.length() - 2; k++) {
			if (t[k] == '6' && t[k + 1] == '6' && t[k + 2] == '6') {
				count++;
				if (count == N) {
					return title;
				}
				break;
			}	
		}
		title++;
	}
}

int main() {
	int N;
	std::cin >> N;
	
	std::cout << circ(N);
}