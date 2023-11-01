#include<iostream>

int paper[100][100];
main() {
    int n, x, y, count = 0;

    std::cin >> n;

    while (n--) {
        std::cin >> x >> y;
        for (int i = y; i < y + 10; i++) {
            for (int j = x; j < x + 10; j++) {
                if (!paper[i][j]) {//0아님 1로 체크할거니까 0의 반대여야 1이되고 true가 돼서 공백일때 아래로 내려감
                    count++;
                    paper[i][j] = 1;
                }
            }
        }
    }
    std::cout << count;
}
