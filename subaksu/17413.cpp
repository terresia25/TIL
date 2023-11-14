/* 17413번 단어뒤집기2
문자열 S가 주어졌을 때, 이 문자열에서 단어만 뒤집으려고 한다. 먼저, 문자열 S는 아래와 같은 규칙을 지킨다.
	1. 알파벳 소문자('a'-'z'),숫자('0'-'9'),공백(' '),특수 문자('<','>')로만 이루어져 있다.
	2. 문자열의 시작과 끝은 공백이 아니다.
	3. '<'와 '>'가 문자열에 있는 경우 번갈아가면서 등장하며, '<'이 먼저 등장한다. 또, 두 문자의 개수는 같다.
태그는 '<'로 시작해서 '>'로 끝나는 길이가 3 이상인 부분 문자열이고, '<'와 '>' 사이에는 알파벳 소문자와 공백만 있다.
단어는 알파벳 소문자와 숫자로 이루어진 부분 문자열이고, 연속하는 두 단어는 공백 하나로 구분한다.
태그는 단어가 아니며, 태그와 단어 사이에는 공백이 없다.
*/

#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

int main() {
	char S[100001];
	vector<char> vec;
	cin.getline(S, 1000001);
	int j;
	int flag = 0;//flag로 뒤집기 조건에 포함하는 문자인지 아닌지 구분하여 코드 들어갈 예정

	for (int i = 0; i < strlen(S) + 1; i++) {
		if (flag == 1) {
			if (S[i] == '>') flag = 0;
			continue;
		}

		if (S[i] == ' ' || S[i] == '<' || i == strlen(S)) {
			j = i - vec.size();//S내에서 각 단어의 첫번 째 인덱스 자리를 찾아줌

			while (!vec.empty()) {
				S[j++] = vec.back();
				vec.pop_back();
			}

			if (S[i] == '<') flag = 1;
		}
		else {
			vec.push_back(S[i]);
		}
	}

	cout << S << endl;

	return 0;
}