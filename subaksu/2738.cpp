#include <iostream>


int main() {
    int a[101][101], b[101][101], n, m;
    //최대100이랬으니까 그냥 편하게 101주기
    std::cin >> n >> m;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            std::cin >> a[i][j];//a 행렬받고
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            std::cin >> b[i][j];//b 행렬받고
    for (int i = 1; i <= n; i++)
    {//한 행씩 반복
        for (int j = 1; j <= m; j++)
            std::cout << a[i][j] + b[i][j] << ' ';//안에서 한 열씩 반복(더해서 공백 주고 출력)
        std::cout << '\n';//다음행 가기전에 줄변경
    }
}