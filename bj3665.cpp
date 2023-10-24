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
void topologySort(unordered_set<int>* graph, int* indegree, int n) {
    queue<int> q;
    for (int i = 1; i <= n; i++) if (indegree[i] == 0) q.push(i);

    vector<int> ans;

    for (int t = 0; t < n; t++) {
        if (q.empty()) {
            cout << "IMPOSSIBLE" << endl;
            return;
        }

        int node = q.front();
        ans.push_back(node);
        q.pop();

        for (int i = 1; i <= n; i++) {
            if (!graph[node].count(i)) continue;

            if (--indegree[i] == 0) q.push(i);
        }
    }

    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
}
void INPUT() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int* rank = new int[n]; for (int i = 0; i < n; i++) cin >> rank[i];
        int* indegree = new int[n + 1]; fill_n(indegree, n + 1, 0);
        unordered_set<int>* v = new unordered_set<int>[n + 1];
        
        // unordered set에 graph 만들기
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                v[rank[i]].insert(rank[j]);
                indegree[rank[j]]++;
            }
        }
        
        // 각 노드에서 제거하기
        int m; cin >> m;
        for (int i = 0; i < m; i++) {
            int start, end; cin >> start >> end;
            if (v[start].erase(end)) {
                indegree[end]--;
                indegree[start]++;
                v[end].insert(start);
            }
            else {
                v[end].erase(start);
                indegree[start]--;
                indegree[end]++;
                v[start].insert(end);
            }
        }

        unordered_map<int, int> check;
        int flag = 0;
        for (int i = 1; i <= n; i++) {
            check[indegree[i]]++;
        }

        if (check[0] > 1) {
            cout << "?" << endl;
        }
        else {
            topologySort(v, indegree, n);
        }

        // free memory
        delete[] rank;
        delete[] indegree;
        delete[] v;
    }
    

}

int main() {
    INIT();
    INPUT();
    return 0;
}
