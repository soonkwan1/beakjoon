#include <iostream>
#include <string>
using namespace std;

char arr[51][51];   // 원본 문자 격자
string str[51];     // 확장된 문자열을 저장할 배열

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int r, c, zr, zc; // 행, 열, 세로 배율, 가로 배율
    cin >> r >> c >> zr >> zc;

    // 원본 격자 입력
    for (int i = 0; i < r; i++) {
        string s;
        cin >> s;
        for (int j = 0; j < s.size(); j++) {
            arr[i][j] = s[j];
        }
    }

    // 가로로 zc배 확대
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            for (int t = 0; t < zc; t++) {
                str[i] += arr[i][j]; // 문자 j를 zc번 반복
            }
        }
    }

    // 세로로 zr배 확대하여 출력
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < zr; j++) {
            cout << str[i] << '\n'; // 확장된 가로 문자열 출력
        }
    }

    return 0;
}
