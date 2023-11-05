#include <iostream>

int main() {
    int N;
    std::cin >> N;

    if (N == 1) return 0;//N이 1인 경우 제외하기 위한 코드

    for (int i = 2; i <= N; i++) {
        while (N % i == 0) {//2부터 하나씩 나눠서, 나눠지면 몫이되는것임
            std::cout << i << std::endl;
            N /= i;
        }
    }

}