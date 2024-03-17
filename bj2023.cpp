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

int n;
vector<string> plusNum;
bool isPrimeNum(string s) {
    int sn = stoi(s);
    for (int i = 2; i <= sqrt(sn); i++) {
        if (sn % i == 0) return false;
    }
    return true;
}
void dfs(string k) {
    if (k.size() == n) {
        cout << k << endl;
        return;
    }

    for (int i = 0; i < plusNum.size(); i++) {
        string new_k = k + plusNum[i];
        if (isPrimeNum(new_k)) {
            dfs(new_k);
        }
    }
}
void INPUT() {
    cin >> n;
    vector<string> one_prime;
    for (int i = 1; i < 10; i++) {
        if (i % 2 == 1) plusNum.push_back(to_string(i));
        if (i == 1) continue;
        if (isPrimeNum(to_string(i))) one_prime.push_back(to_string(i));
    }

    for (int i = 0; i < one_prime.size(); i++) {
        dfs(one_prime[i]);
    }
}

int main() {
    fastio;
    INPUT();
    return 0;
}
