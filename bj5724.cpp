#include <iostream>
using namespace std;
int main() {
    int n;
    while (1)
    {
        int ans = 0;
        cin >> n;
        if (!n)break;
        ans += 1 + n * n; //한 변이 n인 정사각형의 개수 + 한 변이 1인 정사각형의 개수
        for (int i = 2; i <= n - 1; i++)
            ans += i * i;
        if(n!=1)cout << ans << '\n';
        else cout << 1 << '\n';
    }
}
