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
#define INF 987654321

void INIT(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}
void INPUT(){
    int n; cin >> n;
    int* ans = new int[n+1]; fill_n(ans, n+1, INF);
    vector<int> sixnum;
    for (int i=1; i<=n; i++) {
        int tmp = 2 * i * i - i;
        if (tmp > n) break;

        sixnum.push_back(tmp);
        ans[tmp] = 1;
    }

    for (int i=1; i<=n; i++){
        if (ans[i] != INF) continue;
        for (int j=0; j<sixnum.size(); j++){
            if (i - sixnum[j] < 0) break;
            ans[i] = min(ans[i], ans[i - sixnum[j]] + 1);
        }
    }

    cout << ans[n] << endl;

    delete[] ans;
}

int main(){
    INIT();
    INPUT();
    return 0;
}