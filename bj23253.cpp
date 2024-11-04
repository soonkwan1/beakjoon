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
#include <unordered_set>
#define endl "\n"
#define ll long long
#define fastio cin.tie(NULL), cout.tie(NULL), ios_base::sync_with_stdio(false);
using namespace std;

void INPUT(){
    int n, m; cin >> n >> m;
    vector<int>* v = new vector<int>[m];

    for (int i=0; i<m; i++){
        int tmp; cin >> tmp;
        for (int j=0; j<tmp; j++){
            int tmp2; cin >> tmp2;
            v[i].push_back(tmp2);
        }
    }

    bool flag = true;
    for (int i=0; i<m; i++){
        for (int j=0; j<v[i].size() - 1; j++){
            if (v[i][j] < v[i][j+1]){
                flag = false;
                break;
            }
        }
        if (!flag) break;
    }

    if (flag) cout << "Yes" << endl;
    else cout << "No" << endl;

    delete[] v;
}
void SOLUTION(){
    
}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}