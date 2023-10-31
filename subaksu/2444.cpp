#include <iostream>

int main() {
	int N;
	std::cin >> N;

	for (int i = 1; i <= N; i++) {//1~N번째 줄 출력
		for (int j = N - i; j > 0; j--) {
			std::cout << " ";
		}
		for (int k = 2 * i - 1; k > 0; k--) {
			std::cout << "*";
		}

		std::cout << std::endl;
	}

	for (int i = 1; i < N; i++) {//N에서 2N-1번째 줄 출력
		for (int j = 0; j < i; j++) {
			std::cout << " ";
		}
		for (int k = 2 * (N - i) - 1; k > 0; k--) {
			std::cout << "*";
		}

		std::cout << std::endl;
	}
}