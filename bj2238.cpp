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
#define fse(A,B,C) for (int i=A; i<B; i+=C)
using namespace std;

void INIT(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}
void INPUT(){
    int u, n; cin >> u >> n;
    vector<string>* v = new vector<string>[u+1];

    int mn = int(1e9);
    for (int i=0; i<n; i++){
        string name; int cost; cin >> name >> cost;
        v[cost].push_back(name);
    }
    for (int i=1; i<=u; i++){
        if (v[i].size()){
            mn = min(mn, int(v[i].size()));
        }
    }

    for (int i=1; i<=u; i++){
        if (v[i].size() == mn){
            cout << v[i].front() << " " << i << endl;
            break;
        }
    }

    delete[] v;
}

int main(){
    INIT();
    INPUT();
    return 0;
}