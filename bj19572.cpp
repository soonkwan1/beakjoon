#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    double d1, d2, d3;
    cin >> d1 >> d2 >> d3;

    // 각 웅덩이의 물의 양 계산
    double b = (d1 - d2 + d3) / 2;
    double a = d1 - b;
    double c = d2 - a;

    // 소수점 첫째 자리 출력 설정
    cout << fixed;
    cout.precision(1);

    // 조건 검사 및 결과 출력
    if (a > 0 && b > 0 && c > 0) {
        cout << 1 << '\n';
        cout << a << ' ' << b << ' ' << c;
    } else {
        cout << -1;
    }

    return 0;
}
