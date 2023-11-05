#include <iostream>

int main() {
    int number;
    std::cin >> number;
    int i = 0;
    for (int sum = 2; sum <= number; i++) //합이 주어진 수가 될때까지 sum이 아닌 i를 ++함
        sum += 6 * i;//6개씩 등비수열로 쓸수있는 칸 늘어나기 때문
    if (number == 1) i = 1;
    std::cout << i;
    return 0;
}