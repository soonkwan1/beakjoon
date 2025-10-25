#include <iostream>
using namespace std;

int shelf[1001];
int books[1001];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    int remainingSpace = 0;
    for (int i = 0; i < n; i++) {
        cin >> shelf[i];
        remainingSpace += shelf[i];
    }

    for (int i = 0; i < m; i++) cin >> books[i]; 

    int j = 0;
    for (int i = 0; i < m; i++) {
        while (j < n) {
            if (shelf[j] >= books[i]) {
                shelf[j] -= books[i];
                remainingSpace -= books[i];
                break;
            } else j++;
        }
    }

    cout << remainingSpace << '\n';
    return 0;
}
