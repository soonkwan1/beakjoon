#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
#include <queue>
#include <map>
#define ll long long
#define INF 98765432101
#define endl "\n"
using namespace std;


struct Data {
    ll val;
    ll left, right, mid;
};
void INIT() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}
struct CompMax {
    bool operator() (const int& a, const int& b) const {
        return a < b;
    }
};
void INPUT() {
    int n; cin >> n;
    ll* list = new ll[n];

    for (int i = 0; i < n; i++) cin >> list[i];
    sort(list, list + n, CompMax());

    int left, right, pivot;

    Data ans;
    ans.val = 3000000001;

    for (int i = 0; i < n - 2; i++) {
        left = i + 1, right = n - 1;

        while (left < right) {
            ll tmp = list[i] + list[left] + list[right];

            if ( abs(tmp) < ans.val ) {
                ans.val = abs(tmp);
                ans.left = list[i];
                ans.mid = list[left];
                ans.right = list[right];
                if (ans.val == 0) break;
            }

            if (tmp < 0) {
                left++;
            }
            else {
                right--;
            }
        }

        if (ans.val == 0) break;
    }

    cout << ans.left << " " << ans.mid << " " << ans.right << endl;

    delete[] list;
}

int main() {
    INIT();
    INPUT();
    return 0;
}
