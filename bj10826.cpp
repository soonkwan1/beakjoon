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
#define MOD 1000000
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

void INPUT() {
    cin >> n;
    if (n == 0) {
        cout << 0 << endl;
    }
    else if (n == 1) {
        cout << 1 << endl;
    }
    else if (n == 2) {
        cout << 1 << endl;
    }
    else {
        Mat t = divideConquer(n);
        cout << t.b % MOD << endl;
    }
    // cout << t.a << " " << t.b << " " << t.c << " " << t.d << endl;
}

string stringAdd(string a, string b) {
    while (a.size() != b.size()) {
        b = "0" + b;
    }
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    string ans = "";
    int dend = 0;
    for (int i = 0; i < a.size(); i++) {
        int tmp = int(a[i]) - 48 + int(b[i]) - 48 + dend;
        if (tmp >= 10) {
            tmp -= 10, dend = 1;
        }
        else {
            dend = 0;
        }
        ans += char(tmp + 48);
    }
    if (dend) ans += '1';
    reverse(ans.begin(), ans.end());
    return ans;
}
void INPUT2() {
    cin >> n;
    vector<string> v;
    v.push_back("0"), v.push_back("1"), v.push_back("1");
    for (int i = 3; i <= n; i++) {
        v.push_back(stringAdd(v[i - 1], v[i - 2]));
    }
    cout << v[n] << endl;
}

int main() {
    fastio;
    // INPUT();
    INPUT2();
    // cout << int('1') - 48 << endl;
    return 0;
}
