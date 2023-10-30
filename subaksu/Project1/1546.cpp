//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//int main() {
//	float M,N;
//
//	std::cin >> N;
//
//	std::vector<float> scores(N);
//	for (int i = 0; i < N; i++) {
//		std::cin >> scores[i];
//	}
//
//	M=*max_element(scores.begin(), scores.end());//알고리즘 헤더에서 최대 값을 구해주는 함수, * 없이 (시작, 끝-시작)
//	//으로 넣어주면 가장 큰 수의 인덱스 값을 구해 준다
//	for (int i = 0; i < N; i++) {
//			float temp = scores[i];
//			scores[i] = temp / M * 100;
//	}
//
//	float after_result;
//	float sum = 0;
//	
//	for (int i = 0; i < N; i++) {
//		sum = sum + scores[i];
//	//}
//
//	after_result = sum / N;
//
//	std::cout << after_result;
//
//
//}