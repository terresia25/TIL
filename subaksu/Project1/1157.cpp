//#include <iostream>
//
//int main() {
//
//	std::string word;//�ܾ�ޱ� ����
//	int count[26] = {};//���ĺ� ���� ��������
//	int maxnum=0, max_index, check=0;
//
//	std::cin >> word;
//
//	for (int i = 0; i < word.length(); i++)
//	{
//		if (word[i] < 97) {//�ƽ�Ű�ڵ�� ���ϴ� �����ε�, �빮�ڴ� A=65~..Z=90 �ҹ��� a=97~..z=122, 
//			//���� 97���� ������ �빮��!
//			//���⼭�� ��ҹ��ڸ� �б����ְ�
//			count[word[i] - 65]++;//�빮���̸� A�� ���� 65�� ���༭ A�� count[0],...Z�� count[25]�� ���� �Ǵ°���
//		}
//		else {//�Ʒ��� �Ȱ����� �ҹ��ڴϱ� a�� �ƽ�Ű�ڵ尪�� 97�� ����
//			count[word[i] - 97]++;
//		}
//	}
//
//	for (int j = 0; j < 26; j++) {
//		if (count[j] > maxnum) {
//			maxnum = count[j];
//			max_index = j;//����ū ���� count�� ��ġ ��� ����
//		}
//	}
//
//	for (int i = 0; i < 26; i++)
//	{
//		if (count[i] == maxnum) {
//			check++;//�ִ밪�� ���������� üũ
//		}
//	}
//
//	if (check > 1) {
//		std::cout << "?";//üũ�� ���� 1�� �̻��̸� �ִ밪 �������ϱ� ����ǥ ���
//	}
//	else {
//		std::cout << char(max_index + 65);//����ū ���� �ڸ���+65�ϸ� ���� count���� �������� ���ĺ��� �빮�� �ƽ�Ű�ڵ� ��µ�
//	}
//
//}