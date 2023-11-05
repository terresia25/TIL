#include <iostream>

int main() {
	long long int n;//3제곱하면최대조건인 50만의 경우 int 범위인 21억을 넘어가므로 long long int로 선언해줘야 완벽한 정답임
	std::cin >> n;

	std::cout << n * n * n << "\n" << 3;
}