#include <iostream>

int main() {
    int N;
    std::cin >> N;

    if (N == 1) return 0;//N�� 1�� ��� �����ϱ� ���� �ڵ�

    for (int i = 2; i <= N; i++) {
        while (N % i == 0) {//2���� �ϳ��� ������, �������� ���̵Ǵ°���
            std::cout << i << std::endl;
            N /= i;
        }
    }

}