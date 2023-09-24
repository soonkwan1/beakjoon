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

void INIT(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}
int bfs_first(int n, int k){
    deque<pair<int, int> > nodes;
    nodes.push_back(make_pair(n, 0));

    int* visited = new int[100001]; fill_n(visited, 100001, 0);
    visited[n] = 1;

    int cnt = 0;
    int res = 1e9;
    while (!nodes.empty()){
        int node = nodes.front().first;
        int cost = nodes.front().second;
        nodes.pop_front();

        if (node == k){
            res = cost;
            break;
        }

        if (node + 1 <= 100000){
            if (visited[node+1] == 0){
                visited[node+1] = 1;
                nodes.push_back(make_pair(node+1, cost+1));
            }
        }

        if (node - 1 >= 0){
            if (visited[node - 1] == 0){
                visited[node - 1] = 1;
                nodes.push_back(make_pair(node-1, cost+1));
            }
        }

        if (node*2 <= 100000){
            if (visited[node*2] == 0){
                visited[node*2] = 1;
                nodes.push_back(make_pair(node*2, cost+1));
            }
        }
    }

    delete[] visited;
    return res;
}
void bfs(int n, int k){
    deque<pair<int, int> > nodes;
    nodes.push_back(make_pair(n, 0));

    int* dist = new int[100001]; fill_n(dist, 100001, 0);

    int cnt = 0;
    int res = 0;

    while (!nodes.empty()){
        int node = nodes.front().first;
        int cost = nodes.front().second;
        nodes.pop_front();

        if (node == k){
            res = cost;
            cnt++;
            continue;
        }

        if (node + 1 <= 100000){
            if (dist[node+1] == 0 || dist[node+1] == dist[node] + 1){
                dist[node+1] = cost + 1;
                nodes.push_back(make_pair(node+1, cost+1));
            }
        }

        if (node - 1 >= 0){
            if (dist[node-1] == 0 || dist[node-1] == dist[node] + 1){
                dist[node-1] = cost + 1;
                nodes.push_back(make_pair(node-1, cost+1));
            }
        }

        if (node*2 <= 100000){
            if (dist[node*2] == 0 || dist[node*2] == dist[node] + 1){
                dist[node*2] = cost + 1;
                nodes.push_back(make_pair(node*2, cost+1));
            }
        }
    }

    delete[] dist;
    cout << res << endl;
    cout << cnt << endl;
}
void INPUT(){
    int n, k; cin >> n >> k;
    bfs(n, k);
}

int main(){
    INIT();
    INPUT();
    return 0;
}