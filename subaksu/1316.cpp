#include <iostream>

main(void) {
	int N;//� �ܾ ���� ���ΰ�
	std::cin >> N;
	std::string word;//�ܾ���� string ����
	int g_word_count = 0;//���������� �׷� �ܾ üũ�� ����

	for (int i = 0; i < N; i++) {//�ܾ��� ������ŭ �ݺ�
		std::cin >> word;
		bool is_it_gword = true;//�׷�ܾ� �Ǻ��� bool�Լ�
		for (int j = 0; j < word.length(); j++) {//�ܾ��� ���̸�ŭ �ݺ�
			for (int k = 0; k < j; k++) {//�Ѱ� ���ڶ� �� ������ ���ڵ� ��
				if (word[j] != word[j - 1] && word[j] == word[k]) {//���� ����J�� �������ڿ� �ٸ���, �������ڿʹ� ���� ��
					is_it_gword = false;//���� �ٷ� �����ڿʹ� �ٸ��� ������ �ٸ� ���ڿʹ� ���ٴ� ���̴ϱ� �׷�ܾ� �ƴ�
					break;
				}
			}
		}//true�� �����Ǽ� ���´ٸ� �׻� ���� ���ڰ� ������ �� �������ڵ�� �����ؼ� ���Ҵٴ� ���̹Ƿ� �׷�ܾ���
		if (is_it_gword) g_word_count++; //���� true�ΰ�쿡�� ī��Ʈ�� �߰�����
	}

	std::cout << g_word_count; // �ܾ �� �ݺ��� �� �� ���� ���
}