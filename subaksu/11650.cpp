#include <iostream>
#include <vector>
#include <algorithm>

std::vector<std::pair<int, int>> v;//pair 자료형

int main() {
	int N;
	std::cin >> N;
	int x, y;
	for (int i = 0; i < N; i++) {
		std::cin >> x >> y;
		v.push_back({ x, y });
	}
	sort(v.begin(), v.end());//정렬함수쓰면 문제의 조건대로 자동으로 해줌,,,, ㄴㄱㄷ하다가 이런거가 있다니..
	for (int i = 0; i < N; i++) {
		std::cout << v[i].first << ' ' << v[i].second << '\n';
	}
	return 0;
}