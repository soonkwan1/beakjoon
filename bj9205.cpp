#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
#include <queue>
#include <map>
#include <set>
#include <unordered_map>
#define endl "\n"
#define ll long long
#define fastio cin.tie(NULL), cout.tie(NULL), ios_base::sync_with_stdio(false);
using namespace std;

void SOLUTION() {

}
bool** getVisit(int n) {
    bool** tmp = new bool* [n];
    for (int i = 0; i < n; i++) {
        tmp[i] = new bool[n];
        fill_n(tmp[i], n, false);
    }
    return tmp;
}
void freeVisit(bool** t, int n) {
    for (int i = 0; i < n; i++) delete[] t[i];
    delete[] t;
}
void bfs(vector<int>* graph, vector<pair<int,int>> v, int n) {
    int start_x = v[0].first, start_y = v[0].second;
    deque<pair<int, int>> dq;
    dq.push_back(make_pair(v[0].first, v[0].second));

    bool** visited = getVisit(n);
    visited[start_x][start_y] = true;

    while (!dq.empty()) {

    }

    freeVisit(visited, n);
}
void INPUT() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<pair<int, int>> v;
        for (int i = 0; i < n + 2; i++) {
            int s, e; cin >> s >> e;
            v.push_back(make_pair(s, e));
        }

        vector<int>* graph = new vector<int>[n];
        for (int i = 0; i < n + 2; i++) {
            for (int j = 0; j < n + 2; j++) {
                if (i == j) continue;
                if (abs(v[i].first - v[j].first) + abs(v[i].second - v[j].second) <= 1000) {
                    graph[i].push_back(j);
                }
            }
        }


        delete[] graph;

    }
}


int main() {
    fastio;
    INPUT();
    // SOLUTION();
    return 0;
}
