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

int ndp[5001];
void INPUT(){
    fill_n(ndp, 5001, 0);
    vector<int> v; v.push_back(0);
    string line; cin >> line;
    int nsize = line.size();
    for (int i=0; i<nsize; i++) {
        v.push_back(int(line[i]) - 48);
    }

    if (v[1] == 0){
        cout << 0 << endl;
        return;
    }

    ndp[0] = ndp[1] = 1;
    int md = 1000000;
    for (int i=2; i<=nsize; i++){
        if (v[i] != 0) ndp[i] = ndp[i-1];

        int tmp = v[i - 1] * 10 + v[i];
        if (tmp >= 10 && tmp <= 26) ndp[i] = (ndp[i] + ndp[i-2]) % md;
    }
    cout << ndp[nsize] << endl;
}
int main(){
    fastio;
    INPUT();
    // SOLUTION();
    return 0;
}