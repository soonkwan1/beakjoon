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

ll n;
struct Mat {
    ll a, b, c, d;
};

Mat mulMat(Mat m1, Mat m2) {
    Mat tmp;
    tmp.a = m1.a * m2.a + m1.b * m2.c;
    tmp.b = m1.a * m2.b + m1.b * m2.d;
    tmp.c = m1.c * m2.a + m1.d * m2.c;
    tmp.d = m1.c * m2.b + m1.d * m2.d;
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

void INPUT() {
    cin >> n;
    
    if (n == 1) {
        cout << 1 << endl;
    }
    else if (n == 2) {
        cout << 1 << endl;
    }
    else {
        Mat t = divideConquer(n);
        cout << t.b << endl;
    }
    // cout << t.a << " " << t.b << " " << t.c << " " << t.d << endl;
}

int main() {
    fastio;
    INPUT();
    return 0;
}
