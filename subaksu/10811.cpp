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
//	}//N�� ������ŭ �迭 ������� �Է¹ް�
//
//
//	for (int j = 0; j < M; j++) {
//		int F, G;
//		std::cin >> F >> G;
//		std::reverse(vec.begin() + F -1, vec.begin() + G);//reverse �Լ����� ex.(1,3)�� 1�� ���� 3�� ������
//		//�ݺ��϶�� ���̾ 3���� �ݺ��ϰ� ������ +1�������, but ��ȣ ���� ���ڴ� �ּ�����, 0���� �����ϴ°� ���� ����
//	}
//
//	for (int k = 0; k < N; k++) {
//		std::cout << vec[k] << " ";
//	}
//}