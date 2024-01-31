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
    int** table = new int*[101];
    for (int i=0; i<=100; i++){
        table[i] = new int[101];
        fill_n(table[i], 101, 0);
    }

    for (int i=0; i<4; i++){
        int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
        for (int x=x1; x<x2; x++){
            for (int y=y1; y<y2; y++){
                table[x][y] = 1;
            }
        }
    }

    int ans = 0;
    for (int i=0; i<=100; i++){
        for (int j=0; j<=100; j++){
            ans += table[i][j];
        }
    }

    cout << ans << endl;

    for (int i=0; i<=100; i++) delete[] table[i];
    delete[] table;
}

int main(){
    fastio;
    INPUT();
    return 0;
}