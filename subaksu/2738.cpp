#include <iostream>


int main() {
    int a[101][101], b[101][101], n, m;
    //�ִ�100�̷����ϱ� �׳� ���ϰ� 101�ֱ�
    std::cin >> n >> m;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            std::cin >> a[i][j];//a ��Ĺް�
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            std::cin >> b[i][j];//b ��Ĺް�
    for (int i = 1; i <= n; i++)
    {//�� �྿ �ݺ�
        for (int j = 1; j <= m; j++)
            std::cout << a[i][j] + b[i][j] << ' ';//�ȿ��� �� ���� �ݺ�(���ؼ� ���� �ְ� ���)
        std::cout << '\n';//������ �������� �ٺ���
    }
}