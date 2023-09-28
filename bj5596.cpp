#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
#include <queue>
#include <map>
#include <ctime>
using namespace std;
#define endl "\n"
#define INF 987654321

void INIT() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}
void INPUT() {
    int minguk = 0; int mansea = 0;
    for (int i = 0; i < 4; i++) {
        int score; cin >> score;
        minguk += score;
    }
    for (int i = 0; i < 4; i++) {
        int score; cin >> score;
        mansea += score;
    }

    cout << max(minguk, mansea) << endl;
}

int main() {
    INIT();
    INPUT();
    return 0;
}
