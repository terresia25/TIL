#include <iostream>

int main() {
	int N, M, result=0;
	int sum = 0;

	int nums[100] = {};

	std::cin >> N >> M;
	for (int i = 0; i < N; i++) {
		std::cin >> nums[i];
	}

	for (int i = 0; i < N; i++) {
		for (int j = i+1; j < N; j++) {
			for (int k = j+1; k < N; k++) {
				sum = nums[i] + nums[j] + nums[k];
				if (sum <= M && sum > result) {//M과 같거나 작고, result보다 클때 result를 갈아줌
					result = sum;
				}
			}
		}
	}

	std::cout << result;
}