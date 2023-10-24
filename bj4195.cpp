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

void INIT() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}
int findParent(int n, int* parents) {
    if (parents[n] == n) {
        return n;
    }
    return parents[n] = findParent(parents[n], parents);
}
void Union(int a, int b, int* parents) {
    int x = findParent(a, parents);
    int y = findParent(b, parents);

    parents[y] = x;
}
void INPUT() {
    int t; cin >> t;
    while (t--) {
        int f; cin >> f;
        int* parents = new int[200001];
        int* child_cnt = new int[200001];
        for (int i = 1; i <= 200000; i++) parents[i] = i;
        for (int i = 1; i <= 200000; i++) child_cnt[i] = 1;

        int idx = 1;
        unordered_map<string, int> um;
        while (f--) {
            string name1, name2; cin >> name1 >> name2;
            if (!um[name1]) um[name1] = idx++;
            if (!um[name2]) um[name2] = idx++;

            int name1_parent = findParent(um[name1], parents);
            int name2_parent = findParent(um[name2], parents);
            if (name1_parent != name2_parent) {
                Union(name1_parent, name2_parent, parents);
                child_cnt[name1_parent] += child_cnt[name2_parent];
            }

            cout << child_cnt[name1_parent] << endl;
        }
        
        delete[] parents;
        delete[] child_cnt;
    }
}

int main() {
    INIT();
    INPUT();
    return 0;
}
