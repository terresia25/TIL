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
//		int maxDice = (std::max(fk[0], std::max(fk[1], fk[2]))-'0'); //std::max 하면 배열끼리의 큰 값 등 비교해서 큰거 뽑을수 있음
//		//처음에 char로 받은 배열이니까 -'0'해서 숫자로 바꾸는 거 잊지 말기
//		int result = maxDice * 100;
//		std::cout << result << std::endl;
//	}
//
//}