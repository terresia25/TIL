#include<iostream>

int paper[100][100];
main() {
    int n, x, y, count = 0;

    std::cin >> n;

    while (n--) {
        std::cin >> x >> y;
        for (int i = y; i < y + 10; i++) {
            for (int j = x; j < x + 10; j++) {
                if (!paper[i][j]) {//0�ƴ� 1�� üũ�ҰŴϱ� 0�� �ݴ뿩�� 1�̵ǰ� true�� �ż� �����϶� �Ʒ��� ������
                    count++;
                    paper[i][j] = 1;
                }
            }
        }
    }
    std::cout << count;
}
