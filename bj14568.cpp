#include <iostream>
using namespace std;
int main() {
    int ans = 0;
    int n;
    cin >> n;
    for (int i = 1; i <= 100; i++)//남규
        for (int j = 1; j <= 100 - i; j++)//영훈
            for (int k = 1; k <= 100 - i - j; k++)//택희
                if (i >= j + 2 && j != 0 && k != 0 && k % 2 == 0 && i + j + k == n)
                    ans++;
    cout << ans << '\n';
}
