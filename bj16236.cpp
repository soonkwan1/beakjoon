#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
#include <queue>
#include <map>
#include <set>
#define endl "\n"
using namespace std;

void INIT() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}
int compare(pair<int, int> a, pair<int, int> b) {
    if (a.first > b.first) {
        return 1;
    }
    else if (a.first < b.first) {
        return -1;
    }
    else {
        if (a.second > b.second) {
            return 1;
        }
        return -1;
    }
}
int** setMem(int n) {
    int** table = new int* [n];
    for (int i = 0; i < n; i++) {
        table[i] = new int[n];
        for (int j = 0; j < n; j++) {
            cin >> table[i][j];
        }
    }
    return table;
}
void freeMem(int** t, int n) {
    for (int i = 0; i < n; i++) delete[] t[i];
    delete[] t;
}
pair<int, int> findShark(int** t, int n) {
    int x = -1; int y = -1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (t[i][j] == 9) {
                x = i; y = j;
            }
        }
    }
    return make_pair(x, y);
}
int findFish(int** t, int n, int* shark_size, int* eaten, int* ans) {
    int** visited = new int* [n];
    for (int i = 0; i < n; i++) {
        visited[i] = new int[n];
        fill_n(visited[i], n, 0);
    }

    pair<int, int> shark = findShark(t, n);

    deque<pair<pair<int, int>, int> > nodes;
    nodes.push_back(make_pair(make_pair(shark.first, shark.second), 0));
    visited[shark.first][shark.second] = 1;

    int dx[4] = { -1, 0, 0, 1 };
    int dy[4] = { 0, -1, 1, 0 };

    int ret_x, ret_y, ret_c;
    ret_x = -1; ret_y = -1; ret_c = 1000000;
    vector<pair<int, int> > destinations;
    while (!nodes.empty()) {
        int tx = nodes.front().first.first;
        int ty = nodes.front().first.second;
        int tc = nodes.front().second;
        nodes.pop_front();

        if (tc > ret_c) continue;

        if (t[tx][ty] < *shark_size && t[tx][ty] != 0 && t[tx][ty] != 9) {
            destinations.push_back(make_pair(tx, ty));
            ret_c = tc;
            continue;
        }

        for (int i = 0; i < 4; i++) {
            int nx = tx + dx[i];
            int ny = ty + dy[i];

            if (nx >= 0 && nx < n && ny >= 0 && ny < n) {
                if (visited[nx][ny] == 0 && t[nx][ny] <= *shark_size) {
                    visited[nx][ny] = 1;
                    nodes.push_back(make_pair(make_pair(nx, ny), tc + 1));
                }
            }
        }
    }

    freeMem(visited, n);

    if (destinations.size() == 0) return 0;

    sort(destinations.begin(), destinations.end());

    *ans += ret_c;
    *eaten += 1;
    ret_x = destinations[0].first; ret_y = destinations[0].second;

    if (*eaten == *shark_size) {
        *eaten = 0;
        *shark_size += 1;
    }
    t[shark.first][shark.second] = 0;
    t[ret_x][ret_y] = 9;

    return ret_c;
}
void printTable(int** t, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << t[i][j] << " ";
        }
        cout << endl;
    }
}
void INPUT() {
    int n; cin >> n;
    int** table = setMem(n);
    int shark_size = 2; int eaten = 0; int ans = 0;
    while (true) {
        if (findFish(table, n, &shark_size, &eaten, &ans) == 0) {
            break;
        }
    }
    cout << ans << endl;
    freeMem(table, n);
}

int main() {
    INIT();
    INPUT();
    return 0;
}
