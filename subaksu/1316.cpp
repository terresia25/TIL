#include <iostream>

main(void) {
	int N;//몇개 단어가 들어올 것인가
	std::cin >> N;
	std::string word;//단어받을 string 변수
	int g_word_count = 0;//최종적으로 그룹 단어를 체크할 변수

	for (int i = 0; i < N; i++) {//단어의 갯수만큼 반복
		std::cin >> word;
		bool is_it_gword = true;//그룹단어 판별용 bool함수
		for (int j = 0; j < word.length(); j++) {//단어의 길이만큼 반복
			for (int k = 0; k < j; k++) {//한개 글자랑 그 이전의 글자들 비교
				if (word[j] != word[j - 1] && word[j] == word[k]) {//기준 글자J가 그전글자와 다르고, 이전글자와는 같을 때
					is_it_gword = false;//위는 바로 전글자와는 다른데 이전의 다른 글자와는 같다는 뜻이니까 그룹단어 아님
					break;
				}
			}
		}//true로 유지되서 나온다면 항상 같은 글자가 있을땐 그 이전글자들과 연속해서 같았다는 뜻이므로 그룹단어임
		if (is_it_gword) g_word_count++; //따라서 true인경우에만 카운트를 추가해줌
	}

	std::cout << g_word_count; // 단어를 다 반복한 후 센 갯수 출력
}