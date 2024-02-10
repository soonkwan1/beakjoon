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

ll a, b;
#define MOD 1000000000
struct Mat {
    ll a, b, c, d;
};

Mat mulMat(Mat m1, Mat m2) {
    Mat tmp;
    tmp.a = (m1.a % MOD * m2.a % MOD) % MOD + (m1.b % MOD * m2.c % MOD) % MOD;
    tmp.b = (m1.a % MOD * m2.b % MOD) % MOD + (m1.b % MOD * m2.d % MOD) % MOD;
    tmp.c = (m1.c % MOD * m2.a % MOD) % MOD + (m1.d % MOD * m2.c % MOD) % MOD;
    tmp.d = (m1.c % MOD * m2.b % MOD) % MOD + (m1.d % MOD * m2.d % MOD) % MOD;
    return tmp;
}
Mat divideConquer(ll m) {
    if (m == 1) {
        return { 1, 1, 1, 0 };
    }
    else {
        Mat tmp = divideConquer(m / 2);
        if (m % 2 == 0) {
            return mulMat(tmp, tmp);
        }
        else {
            return mulMat(mulMat(tmp, tmp), { 1, 1, 1, 0 });
        }
    }
}

ll returnFibo(int k) {
    if (k == 1 || k == 2) {
        return 1;
    }
    else {
        Mat t = divideConquer(k);
        return t.b % MOD;        
    }
}

void INPUT() {
    cin >> a >> b;
    ll ans = 0;
    for (int i = a; i <= b; i++) {
        ans = (ans + returnFibo(i)) % MOD;
        cout << ans << endl;
    }
    // cout << ans << endl;
    // cout << t.a << " " << t.b << " " << t.c << " " << t.d << endl;
}
int main() {
    fastio;
    INPUT();
    return 0;
}
