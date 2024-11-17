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

void printType1(int n) {
    for (int i = 0; i < n; i++) cout << "@";
    for (int i = 0; i < n * 3; i++) cout << " ";
    for (int i = 0; i < n; i++) cout << "@";
    cout << endl;
}
void printType2(int n) {
    for (int i = 0; i < n * 5; i++) cout << "@";
    cout << endl;
}
void INPUT() {
    int n; cin >> n;
    for (int i = 0; i < n; i++) printType1(n);
    for (int i = 0; i < n; i++) printType2(n);
    for (int i = 0; i < n; i++) printType1(n);
    for (int i = 0; i < n; i++) printType2(n);
    for (int i = 0; i < n; i++) printType1(n);
}

int main() {
    fastio;
    INPUT();
    return 0;
}
