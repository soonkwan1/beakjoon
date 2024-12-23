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
    int n; cin >> n;
    int* num = new int[n];
    for (int i=0; i<n; i++) cin >> num[i];

    int* increasing = new int[n];
    fill_n(increasing, n, 0);

    for (int i=1; i<n; i++){
        if (num[i] > num[i-1]) increasing[i] = increasing[i-1] + 1;
    }

    int curr = num[0];
    int ans = 0;
    for (int i=1; i<n; i++){
        if (increasing[i] == 0) curr = num[i];
        else{
            ans = max(ans, num[i] - curr);
        }
    }
    cout << ans << endl;

    delete[] increasing;
    delete[] num;
}
void SOLUTION(){

}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}