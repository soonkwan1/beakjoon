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

int r, c;
int** m;
void INPUT(){
    cin >> r >> c;
    m = new int*[r];
    for (int i=0; i<r; i++){
        m[i] = new int[c];
        fill_n(m[i], c, 0);
    }

    for (int i=0; i<c; i++){
        int tmp; cin >> tmp;
        for (int j=0; j<tmp; j++){
            m[j][i] = 1;
        }
    }
}
void freeMap(){
    for (int i=0; i<r; i++) delete[] m[i];
    delete[] m;
}
void printMap(){
    for (int i=0; i<r; i++){
        for (int j=0; j<c; j++){
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
}
void SOLUTION(){
    int ans = 0;
    for (int i=0; i<r; i++){
        for (int j=0; j<c; j++){
            if (m[i][j] == 1) continue;

            bool hasRight = false, hasLeft = false;
            for (int k=j-1; k>=0; k--){
                if (m[i][k] == 1){
                    hasLeft = true;
                    break;
                }
            }
            for (int k=j+1; k<c; k++){
                if (m[i][k] == 1){
                    hasRight = true;
                    break;
                }
            }

            if (hasRight && hasLeft){
                ans++;
                m[i][j] = 1;
            }
        }
    }
    cout << ans << endl;
    // printMap();
    freeMap();
}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}