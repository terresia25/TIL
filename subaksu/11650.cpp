#include <iostream>
#include <vector>
#include <algorithm>

std::vector<std::pair<int, int>> v;//pair �ڷ���

int main() {
	int N;
	std::cin >> N;
	int x, y;
	for (int i = 0; i < N; i++) {
		std::cin >> x >> y;
		v.push_back({ x, y });
	}
	sort(v.begin(), v.end());//�����Լ����� ������ ���Ǵ�� �ڵ����� ����,,,, �������ϴٰ� �̷��Ű� �ִٴ�..
	for (int i = 0; i < N; i++) {
		std::cout << v[i].first << ' ' << v[i].second << '\n';
	}
	return 0;
}