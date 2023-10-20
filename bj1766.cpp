#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
#include <queue>
#include <map>
#define ll long long
#define INF 98765432101
#define endl "\n"
using namespace std;

void INIT() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}
vector<int> topologySort(vector<int>* graph, int* indegree, int v) {
<<<<<<< HEAD
    priority_queue<int, vector<int>, greater<int> > q;
    for (int i=1; i<=v; i++) if (indegree[i] == 0) q.push(i);

    vector<int> ans;

    while (!q.empty()){
        int node = q.top();
        cout << node << " ";
        q.pop();

        for (int i=0; i<graph[node].size(); i++){
            int to_node = graph[node][i];
            if (--indegree[to_node] == 0) q.push(to_node);
        }
    }
    cout << endl;

=======
    queue<int> q;

    vector<int> ans;
    int node;
    bool* visited = new bool[v + 1]; fill_n(visited, v + 1, false);
    for (int i = 0; i < v; i++) {
        for (int j = 1; j <= v; j++) {
            if (indegree[j] == 0 && !visited[j]) {
                visited[j] = true;
                node = j;
                break;
            }
        }

        cout << node << " ";
        for (int j = 0; j < graph[node].size(); j++) indegree[graph[node][j]]--;
    }
    cout << endl;

    delete[] visited;
>>>>>>> 4f2bf23908abfb19afdccdeac5a29646dc17d603
    return ans;
}
void INPUT() {
    int v, e; cin >> v >> e;

    int* indegree = new int[v + 1]; fill_n(indegree, v + 1, 0);

    vector<int>* graph = new vector<int>[v + 1];
    for (int i = 0; i < e; i++) {
        int start, end; cin >> start >> end;
        graph[start].push_back(end);
        indegree[end]++;
    }

    vector<int> seq = topologySort(graph, indegree, v);

    // free memory
    delete[] indegree;
    delete[] graph;
}

int main() {
    INIT();
    INPUT();
    return 0;
}

// 1, 2, 3, 4, 5, ...
<<<<<<< HEAD
// y-1, y+1 로 도착
=======
// y-1, y+1 로 도착
>>>>>>> 4f2bf23908abfb19afdccdeac5a29646dc17d603
