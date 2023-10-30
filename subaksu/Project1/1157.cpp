//#include <iostream>
//
//int main() {
//
//	std::string word;//단어받기 위함
//	int count[26] = {};//알파벳 갯수 세기위함
//	int maxnum=0, max_index, check=0;
//
//	std::cin >> word;
//
//	for (int i = 0; i < word.length(); i++)
//	{
//		if (word[i] < 97) {//아스키코드로 비교하는 과정인데, 대문자는 A=65~..Z=90 소문자 a=97~..z=122, 
//			//따라서 97보다 작으면 대문자!
//			//여기서는 대소문자를 분기해주고
//			count[word[i] - 65]++;//대문자이면 A의 값인 65를 빼줘서 A는 count[0],...Z는 count[25]에 들어가게 되는것임
//		}
//		else {//아래도 똑같지만 소문자니까 a의 아스키코드값인 97을 빼줌
//			count[word[i] - 97]++;
//		}
//	}
//
//	for (int j = 0; j < 26; j++) {
//		if (count[j] > maxnum) {
//			maxnum = count[j];
//			max_index = j;//가장큰 수의 count내 위치 기억 위함
//		}
//	}
//
//	for (int i = 0; i < 26; i++)
//	{
//		if (count[i] == maxnum) {
//			check++;//최대값이 여러개인지 체크
//		}
//	}
//
//	if (check > 1) {
//		std::cout << "?";//체크한 값이 1개 이상이면 최대값 여러개니까 물음표 출력
//	}
//	else {
//		std::cout << char(max_index + 65);//가장큰 수의 자릿수+65하면 위의 count과정 역순으로 알파벳의 대문자 아스키코드 출력됨
//	}
//
//}