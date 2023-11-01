#include <iostream>

int main() {
	int arr[9][9];
	int maxnum = 0, rowindex = 0, colindex = 0;

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			std::cin >> arr[i][j];
			if (arr[i][j] > maxnum) {
				maxnum = arr[i][j];
				rowindex = i;
				colindex = j;
			}
		}
	}
	std::cout << maxnum << std::endl;
	std::cout << rowindex + 1 << " " << colindex + 1 << std::endl;
}