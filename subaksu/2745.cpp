#include <iostream>

int main() {
	int b;
	int result = 0;
	std::string number;
	std::cin >> number >> b;

	for (int i = 0; i < number.length(); i++) {
		if ('0' <= number[i] && number[i] <= '9') {//숫자인경우
			result = result * b + (number[i] - '0');
		}
		else {//문자인경우
			result = result * b + (number[i] - 'A' + 10);
		}
	}

	std::cout << result;
	return 0;
}