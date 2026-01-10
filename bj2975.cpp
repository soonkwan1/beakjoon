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
#define fastio cin.tie(NULL), cout.tie(NULL), ios_base::sync_with_stdio(false);

void INPUT() {
    while (true) {
        int n1, n2; char cal;
        cin >> n1 >> cal >> n2;
        if (n1 == 0 && n2 == 0 && cal == 'W') break;

        if (cal == 'W') {
            int tmp = n1 - n2;
            if (tmp < -200) cout << "Not allowed" << endl;
            else cout << tmp << endl;
        }
        else if (cal == 'D') {
            cout << n1 + n2 << endl;
        }
    }
}

int main() {
    fastio;
    INPUT();
    return 0;
} 
