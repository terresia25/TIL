#include <iostream>

using namespace std;

int main() {
	int A, B;

	while (cin>>A>>B) { //�Է��� ������ TRUE, ������ FALSE�� �ȴ�. (cin>>A>>B).eof()�� �̿��ص� ������ �̰�쿡�� !�� �ٿ���� �ƶ��� �´� TRUE�� �ȴ�.
		cout << A + B << "\n";
	}

	return 0;
}