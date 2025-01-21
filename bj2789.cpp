#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    // CAMBRIDGE에 포함된 문자는 출력하지 않음
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'C' || s[i] == 'A' || s[i] == 'M' || s[i] == 'B' || s[i] == 'E'
            || s[i] == 'R' || s[i] == 'I' || s[i] == 'D' || s[i] == 'G') {
            continue; // 해당 문자 건너뜀
        }
        cout << s[i]; // CAMBRIDGE에 포함되지 않은 문자만 출력
    }
    return 0;
}
