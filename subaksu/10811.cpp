//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//int main() {
//	int N, M;
//
//	std::cin >> N >> M;
//	std::vector<int> vec(N);
//
//	for (int i = 0; i < N; i++) {
//		vec[i] = i + 1;
//	}//N의 개수만큼 배열 순서대로 입력받고
//
//
//	for (int j = 0; j < M; j++) {
//		int F, G;
//		std::cin >> F >> G;
//		std::reverse(vec.begin() + F -1, vec.begin() + G);//reverse 함수에서 ex.(1,3)은 1번 부터 3번 전까지
//		//반복하라는 뜻이어서 3까지 반복하고 싶으면 +1해줘야함, but 괄호 안의 숫자는 주소지로, 0부터 시작하는거 잊지 말기
//	}
//
//	for (int k = 0; k < N; k++) {
//		std::cout << vec[k] << " ";
//	}
//}