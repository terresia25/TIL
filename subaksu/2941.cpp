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
            index = str.find(ready[i]);
            if (index == std::string::npos)
                break;
            str.replace(index, ready[i].length(), "#");
        }
    }
    std::cout << str.length();
}