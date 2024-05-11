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
    string n1, n2, oper; cin >> n1 >> oper >> n2;

    if (n1.size() < n2.size())  swap(n1, n2);
    
    if (oper == "*") {
        for (int i = 1; i < n2.size(); i++) {
            n1 += "0";
        }
    }
    else {
        if (n1.size() == n2.size()) {
            n1[0] = '2';
        }
        else {
            n1[n1.size() - n2.size()] = '1';
        }
    }
    cout << n1 << endl;
}

int main() {
    fastio;
    INPUT();
    return 0;
}
