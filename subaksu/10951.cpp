#include <iostream>

using namespace std;

int main() {
	int A, B;

	while (cin>>A>>B) { //입력이 있을땐 TRUE, 없으면 FALSE가 된다. (cin>>A>>B).eof()를 이용해도 되지만 이경우에는 !를 붙여줘야 맥락과 맞는 TRUE가 된다.
		cout << A + B << "\n";
	}

	return 0;
}