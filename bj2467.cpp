#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
#include <queue>
#include <map>
#define ll long long
#define INF 987654321
#define endl "\n"
using namespace std;

void INIT() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}
void INPUT() {
    int n; cin >> n;
    int* list = new int[n];

    for (int i = 0; i < n; i++) cin >> list[i];

    int left, right;
    left = 0; right = n - 1;
    ll initial_value = abs(list[left] + list[right]);

    pair<int, int> ans;
    ans.first = list[left]; ans.second = list[right];
    while (left < right) {
        ll temp = list[left] + list[right];
        if (abs(temp) < initial_value) {
            ans.first = list[left];
            ans.second = list[right];
            initial_value = abs(temp);
        }

        if (temp < 0) {
            left++;
        }
        else {
            right--;
        }
    }

    cout << ans.first << " " << ans.second << endl;

    delete[] list;
}

int main() {
    INIT();
    INPUT();
    return 0;
}
