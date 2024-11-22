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
    int* v = new int[10001]; fill_n(v, 10001, 0);
    int idx = 1;
    for (int i = 1; i < 50; i++)
        for (int j = 0; j < i; j++) v[idx++] = i;
    
    int start, end; cin >> start >> end;
    ll total = 0;
    for (int i = start; i <= end; i++) total += v[i];
    cout << total << endl;

    delete[] v;
}

int main() {
    fastio;
    INPUT();
    return 0;
}
