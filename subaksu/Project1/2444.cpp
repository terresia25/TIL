#include <iostream>

int main() {
	int N;
	std::cin >> N;

	for (int i = 1; i <= N; i++) {//1~N��° �� ���
		for (int j = N - i; j > 0; j--) {
			std::cout << " ";
		}
		for (int k = 2 * i - 1; k > 0; k--) {
			std::cout << "*";
		}

		std::cout << std::endl;
	}

	for (int i = 1; i < N; i++) {//N���� 2N-1��° �� ���
		for (int j = 0; j < i; j++) {
			std::cout << " ";
		}
		for (int k = 2 * (N - i) - 1; k > 0; k--) {
			std::cout << "*";
		}

		std::cout << std::endl;
	}
}