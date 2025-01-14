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

typedef struct Node{
    int x, y;
}Node;

int checkBingo(bool** t){
    int cnt = 0;
    bool flag3 = true;
    bool flag4 = true;
    for (int i=0; i<5; i++){
        bool flag1 = true;
        bool flag2 = true;
        for (int j=0; j<5; j++){
            if (!t[i][j]) flag1 = false;
            if (!t[j][i]) flag2 = false;
        }
        if (!t[i][4-i]) flag3 = false;
        if (!t[4-i][i]) flag4 = false;

        if (flag1) cnt++;
        if (flag2) cnt++;
    }
    if (flag3) cnt++;
    if (flag4) cnt++;

    if (cnt >= 3) return cnt;
    return 0;
}
void INPUT(){
    bool** visited = new bool*[5];
    for (int i=0; i<5; i++) {
        visited[i] = new bool[5];
        fill_n(visited[i], 5, false);
    }
    Node node[26];

    for (int i=0; i<5; i++){
        for (int j=0; j<5; j++){
            int num; cin >> num;
            node[num].x = i; node[num].y = j;
        }
    }

    for (int i=0; i<25; i++){
        int tmp; cin >> tmp;
        visited[node[tmp].x][node[tmp].y] = true;
        int res = checkBingo(visited);
        if (res) {
            cout << i + 1 << endl;
            break;
        }
    }

    for (int i=0; i<5; i++) delete[] visited[i];
    delete[] visited;
}
void SOLUTION(){

}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}