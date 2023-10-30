#include <iostream>
#include <string>
#include <vector>

int main() {
    std::vector<std::string> ready = { "c=","c-","dz=","d-","lj","nj","s=","z=" };//조건의 문자열들을 벡터로 선언
    int index;
    std::string str;
    std::cin >> str;
    for (int i = 0; i < ready.size(); i++)
    {
        while (1) {
            index = str.find(ready[i]);//find 함수를 통해 벡터로 선언한 조건 단어들을 찾아서 인덱스에 넣기
            if (index == std::string::npos)//index의 값이 npos, find함수에서 문자열을 찾지 못했을 때 리턴되는 값
                break;
            str.replace(index, ready[i].length(), "#");//ready의 값을 #으로 바꿔주는 함수
        }
    }
    std::cout << str.length();
}