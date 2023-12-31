#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#define endl "\n"
#define ll long long
#define fastio cin.tie(NULL), cout.tie(NULL), ios_base::sync_with_stdio(false);
using namespace std;

void dfs(vector<int> dogs, int start, int* table, int n, int& ans, bool* visited){
    if (start == 100){
        int tmp = 0;
        for (int i=0; i<50; i++){
            if (table[i] && table[i+50]) tmp++;
        }
        ans = max(ans, tmp);
        return;
    }

    for (int i=0; i<n; i++){
        if (visited[i]) continue;

        int n_start = start + dogs[i];

        table[n_start] = 1;
        visited[i] = true;
        dfs(dogs, n_start, table, n, ans, visited);
        table[n_start] = 0;
        visited[i] = false;
    }
}

void INPUT(){
    int n; cin >> n;
    vector<int> dogs;
    for (int i=0; i<n; i++){
        int dog; cin >> dog;
        dogs.push_back(dog);
    }

    int* table = new int[100];
    bool* visited = new bool[n];
    fill_n(table, 100, 0); table[0] = 1;
    fill_n(visited, n, false);

    int ans = 0;
    dfs(dogs, 0, table, n, ans, visited);
    cout << ans << endl;

    delete[] visited;
    delete[] table;
}

int main(){
    fastio;
    INPUT();
    return 0;
}