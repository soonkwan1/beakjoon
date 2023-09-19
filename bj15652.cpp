#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
#include <queue>
#include <map>
using namespace std;

void INIT(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}

void dfs(vector<int> list, int start, int n, int m){

    if (list.size() == m){
        for (int i=0; i<list.size(); i++){
            cout << list[i] << " ";
        }
        cout << "\n";
        return;
    }

    for (int i=start; i<=n; i++){
        list.push_back(i);
        dfs(list, i, n, m);
        list.pop_back();
    }
}

void INPUT(){
    int n, m; cin >> n >> m;
    vector<int> list;
    dfs(list, 1, n, m);
}

int main(){
    INIT();
    INPUT();
    return 0;
}