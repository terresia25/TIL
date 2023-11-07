#include <iostream>
#include <vector>

using namespace std;

vector<bool> isVisited(100001, false);/*�ִ� ������ 10������, false�� bool ���� ����*/

int main() {
	int curNum = 0;//���� ���� üũ�� ���� ���� ����
	int n;//������ N�� �ޱ� ���� ���� ����
	cin >> n;//n �Է� ����

	vector<char> s;//������ ����� ���� ������� �󸶳� �ؾ��ϴ����� ��� ���� ����

	for (int i = 0; i < n; i++) {//n���� ����
		int temp;
		cin >> temp;//������ �ϴ� ������ �� �ڸ��� ���⿡ ����

		if (isVisited[temp]) {//isVisited��� ���� �Լ��� true�� �����, �湮�����ִ� ���϶� ����
			cout << "NO";//�湮���� �־ �̹� �־��� �������� �־��� ������ ����� �����Ƿ�
			return 0;//��ó�� NO�� ����ϰ� �׳� �ڵ� ���� ���ѹ���
		}

		while (curNum < temp) {//���� ���ڰ� ������ ���� �� ���� ������
			++curNum;//���� ��ŭ ���� ���� �����Ŵϱ� �� ����
			if (!isVisited[curNum]) {
				//������ڰ� false�� �湮�� �� ������
				s.push_back('+');
			}
		}

		while (curNum >= temp) {//���� ���ڰ� ������ ���� ���� ���ų� �׺��� Ŭ��
			if (!isVisited[curNum]) {
				s.push_back('-');
				isVisited[curNum] = true;//���鼭 �ѹ� �湮���� �����ϱ� true�� �� �ٲ���
			}
			--curNum;//�����ϱ� ���� ���� ����
		}
	}

	for (char i : s) {/* ���� ��� For��, s������ ��� ��Ҹ� �Ʒ� ��ɾ� ������*/
		cout << i << '\n';
	}

}