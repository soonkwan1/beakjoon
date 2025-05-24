#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a; // 첫 번째 숫자
    cin >> a;

    while (true) {
        int b;
        cin >> b;

        // 입력이 끝나면 종료
        if (cin.eof()) break;

        // 오름차순이 아닌 경우 "Bad" 출력 후 종료
        if (a > b) {
            cout << "Bad" << '\n';
            return 0;
        }

        a = b; // 다음 비교를 위해 값 갱신
    }

    // 모든 숫자가 오름차순이라면 "Good" 출력
    cout << "Good" << '\n';
    return 0;
}
