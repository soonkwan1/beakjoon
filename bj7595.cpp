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
        int t; cin >> t;
        if (!t) break;
        for (int i = 1; i <= t; i++) {
            for (int j = 0; j < i; j++) cout << "*";
            cout << endl; 
        }
    }
}

int main() {
    fastio;
    INPUT();
    return 0;
} 
