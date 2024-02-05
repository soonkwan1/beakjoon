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

int n, k;
vector<int> coins;

void INPUT(){
    cin >> n >> k;
    int* ndp = new int[k+1];
    fill_n(ndp, k+1, 0);
    ndp[0] = 1;

    for (int i=0; i<n; i++){
        int tmp; cin >> tmp;
        coins.push_back(tmp);
    }

    for (int i=0; i<n; i++){
        for (int j=coins[i]; j<=k; j++){
            ndp[j] += ndp[j - coins[i]];
        }
    }

    cout << ndp[k] << endl;

    delete[] ndp;
}
int main(){
    fastio;
    INPUT();
    return 0;
}