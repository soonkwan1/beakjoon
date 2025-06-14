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

typedef struct Node {
    int a, b, c, d;
}Node;
void INPUT() {
    while (true) {
        int n; cin >> n;
        if (!n) break;
        int p; cin >> p;

        vector<Node> v;
        int start = 1; int end = n;
        for (int i = 0; i  < n / 2; i+=2) {
            Node tmp;
            tmp.a = start + i;
            tmp.b = start + i + 1;
            tmp.c = end - i - 1;
            tmp.d = end - i;
            v.push_back(tmp);
        }

        for (int i = 0; i < v.size(); i++) {
            if (v[i].a == p) {
                cout << v[i].b << " " << v[i].c << " " << v[i].d << endl;
            }
            else if (v[i].b == p) {
                cout << v[i].a << " " << v[i].c << " " << v[i].d << endl;
            }
            else if (v[i].c == p) {
                cout << v[i].a << " " << v[i].b << " " << v[i].d << endl;
            }
            else if (v[i].d == p) {
                cout << v[i].a << " " << v[i].b << " " << v[i].c << endl;
            }
        }
    }

}

int main() {
    fastio;
    INPUT();
    return 0;
}
