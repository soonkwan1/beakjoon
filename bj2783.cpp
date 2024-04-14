using namespace std;
#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <functional>
#include <cmath>
#include <map>
#include <set>
#define _CRT_SECURE_NO_WARNINGS
#define INF 987654321
#define ll long long
#define pi 3.14159265359
typedef pair<int, int> PII;
using namespace std;
 
 
 
int main() {
    double x, y;
    int t;
    double ans = 0;
    cin >> x >> y >> t;
 
    ans = x / y * 1000;
 
    while (t--) {
        double a, b;
        cin >> a >> b;
        if (ans > a / b * 1000) {
            ans = a / b * 1000;
        }
    }
 
    cout << fixed;
    cout.precision(2);
    cout << ans << "\n";
 
    return 0;
}
