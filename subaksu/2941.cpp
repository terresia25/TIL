#include <iostream>
#include <string>
#include <vector>

int main() {
    std::vector<std::string> ready = { "c=","c-","dz=","d-","lj","nj","s=","z=" };//������ ���ڿ����� ���ͷ� ����
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