#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
#include <queue>
#include <map>
#include <unordered_set>
#include <unordered_map>
#define ll long long
#define INF 98765432101
#define endl "\n"
using namespace std;

void INIT() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}
void INPUT() {
    int n; cin >> n;

    if (n >= 620) cout << "Red" << endl;
    else if (n >= 590) cout << "Orange" << endl;
    else if (n >= 570) cout << "Yellow" << endl;
    else if (n >= 495) cout << "Green" << endl;
    else if (n >= 450) cout << "Blue" << endl;
    else if (n >= 425) cout << "Indigo" << endl;
    else cout << "Violet" << endl;
}

int main() {
    INIT();
    INPUT();
    return 0;
}
