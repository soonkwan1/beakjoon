#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<string> lines(3);

    for (int i = 0; i < 3; ++i) {
        getline(cin, lines[i]);
    }

    sort(lines.begin(), lines.end());

    if (lines[0][0] == 'k' && lines[1][0] == 'l' && lines[2][0] == 'p') {
        cout << "GLOBAL" << endl;
    } else {
        cout << "PONIX" << endl;
    }

    return 0;
}
