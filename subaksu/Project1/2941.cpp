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
            index = str.find(ready[i]);//find �Լ��� ���� ���ͷ� ������ ���� �ܾ���� ã�Ƽ� �ε����� �ֱ�
            if (index == std::string::npos)//index�� ���� npos, find�Լ����� ���ڿ��� ã�� ������ �� ���ϵǴ� ��
                break;
            str.replace(index, ready[i].length(), "#");//ready�� ���� #���� �ٲ��ִ� �Լ�
        }
    }
    std::cout << str.length();
}