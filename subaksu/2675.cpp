#include <iostream>
#include <string>
#include <vector>

int main() {
	int t,r;
	std::cin >> t;
	std::string s;
	std::vector<std::string> nnum;
	for (int i = 0; i < t; i++) {
		std::cin >> r >> s;
		std::string temp;
		for (int j = 0; j < s.length(); j++) {
			for (int k = 0; k < r; k++) {
				temp.push_back(s[j]);
			}
		}
		nnum.push_back(temp);
	}
	for (int i = 0; i < t; i++) {
		std::cout << nnum[i] << std::endl;
	}
}