//#include <iostream>
//#include <string>
//
//int main() {
//	int first_number;
//	char second_number[4]; //char로 받는 경우 맨 마지막 자리 null character자리가 필요하므로 필요한 자릿수+1로 배열 선언 해야함
//
//	std::cin >> first_number;
//	std::cin >> second_number;
//
//	std::cout << first_number * (second_number[2] -'0') << std::endl; //char로 받아서 문자가 된 것에 -'0' 해주면 숫자됨
//	std::cout << first_number * (second_number[1] - '0') << std::endl;
//	std::cout << first_number * (second_number[0] - '0') << std::endl;
//	std::cout << (first_number * (second_number[0] - '0') * 100) + (first_number * (second_number[1] - '0') * 10) + (first_number * (second_number[2] - '0'));
//}
