//#include <iostream>
//
//int main() {
//	char fk[4];
//
//	std::cin >> fk[0];
//	std::cin >> fk[1];
//	std::cin >> fk[2];
//
//	if (fk[0] == fk[1] && fk[1] == fk[2]) {
//		std::cout << (10000 + ((fk[0]-'0') * 1000));
//	}
//	else if (fk[0] == fk[1] || fk[1] == fk[2]) {
//		std::cout << (1000 + ((fk[1]-'0') * 100));
//	}
//	else if (fk[0] == fk[2]) {
//		std::cout << (1000 + ((fk[0]-'0') * 100));
//	}
//	else {
//		int maxDice = (std::max(fk[0], std::max(fk[1], fk[2]))-'0'); //std::max �ϸ� �迭������ ū �� �� ���ؼ� ū�� ������ ����
//		//ó���� char�� ���� �迭�̴ϱ� -'0'�ؼ� ���ڷ� �ٲٴ� �� ���� ����
//		int result = maxDice * 100;
//		std::cout << result << std::endl;
//	}
//
//}