#include <iostream>

int main() {
    int number;
    std::cin >> number;
    int i = 0;
    for (int sum = 2; sum <= number; i++) //���� �־��� ���� �ɶ����� sum�� �ƴ� i�� ++��
        sum += 6 * i;//6���� �������� �����ִ� ĭ �þ�� ����
    if (number == 1) i = 1;
    std::cout << i;
    return 0;
}