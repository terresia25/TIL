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
//	M=*max_element(scores.begin(), scores.end());//�˰��� ������� �ִ� ���� �����ִ� �Լ�, * ���� (����, ��-����)
//	//���� �־��ָ� ���� ū ���� �ε��� ���� ���� �ش�
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