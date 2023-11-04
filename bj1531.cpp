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
    int n, m; cin >> n >> m;
    int table[101][101] = {0,};

    while (n--){
        int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
        for (int i=x1; i<=x2; i++){
            for (int j=y1; j<=y2; j++){
                table[i][j]++;
            }
        }
    }

    int ans = 0;
    for (int i=1; i<=100; i++){
        for (int j=1; j<=100; j++){
            if (table[i][j] > m) ans++;
            // cout << table[i][j] << " ";
        }
        // cout << endl;
    }

    cout << ans << endl;
}

int main(){
    INIT();
    INPUT();
    return 0;
}