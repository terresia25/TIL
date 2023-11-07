#include <iostream>
#include <vector>

using namespace std;

vector<bool> isVisited(100001, false);/*최대 조건인 10만으로, false로 bool 벡터 선언*/

int main() {
	int curNum = 0;//현재 숫자 체크를 위한 변수 선언
	int n;//조건의 N을 받기 위한 변수 선언
	cin >> n;//n 입력 받음

	vector<char> s;//수열을 만들기 위해 입출력을 얼마나 해야하는지를 담기 위한 벡터

	for (int i = 0; i < n; i++) {//n동안 실행
		int temp;
		cin >> temp;//만들어야 하는 수열을 한 자리씩 여기에 받음

		if (isVisited[temp]) {//isVisited라고 만든 함수가 true면 실행됨, 방문한적있는 수일때 실행
			cout << "NO";//방문한적 있어서 이미 넣었다 뺐을때는 주어진 수열을 만들수 없으므로
			return 0;//위처럼 NO를 출력하고 그냥 코드 종료 시켜버림
		}

		while (curNum < temp) {//현재 숫자가 수열로 받은 수 보다 작을때
			++curNum;//수열 만큼 현재 숫자 넣을거니까 선 증가
			if (!isVisited[curNum]) {
				//현재숫자가 false로 방문한 적 없을때
				s.push_back('+');
			}
		}

		while (curNum >= temp) {//현재 숫자가 수열로 받은 수와 같거나 그보다 클때
			if (!isVisited[curNum]) {
				s.push_back('-');
				isVisited[curNum] = true;//빼면서 한번 방문한적 있으니까 true로 값 바꿔줌
			}
			--curNum;//뺐으니까 현재 숫자 감소
		}
	}

	for (char i : s) {/* 범위 기반 For문, s벡터의 모든 요소를 아래 명령어 실행함*/
		cout << i << '\n';
	}

}