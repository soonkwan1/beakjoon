#include <iostream>
#include <string>
#include <unordered_map>
#define endl "\n"
#define fastio cin.tie(NULL), cout.tie(NULL), ios_base::sync_with_stdio(false);
using namespace std;
bool isRange(int x, int y){
    if (x < 1 || x > 8) return false;
    if (y < 1 || y > 8) return false;
    return true;
}
void moveUnit(string unit, pair<int,int>& k_pos, pair<int,int>& r_pos){
    int dx[8] = {1, -1, 0, 0, 1, -1, 1, -1};
    int dy[8] = {0, 0, -1, 1, 1, 1, -1, -1};
    unordered_map<string, int> um;
    um["R"] = 0; um["L"] = 1; um["B"] = 2; um["T"] = 3;
    um["RT"] = 4; um["LT"] = 5; um["RB"] = 6; um["LB"] = 7;

    int idx = um[unit];
    int nx = k_pos.first + dx[idx];
    int ny = k_pos.second + dy[idx];
    if (!isRange(nx, ny)) return;

    if (nx == r_pos.first && ny == r_pos.second){
        int rnx = r_pos.first + dx[idx];
        int rny = r_pos.second + dy[idx];
        if (!isRange(rnx, rny)) return;
        r_pos.first = rnx;
        r_pos.second = rny;
    }
    k_pos.first = nx;
    k_pos.second = ny;
}
void INPUT(){
    string king, rock; cin >> king >> rock;
    int n; cin >> n;
    pair<int,int> k_pos = make_pair(int(king[0]) - 64, int(king[1]) - 48);
    pair<int,int> r_pos = make_pair(int(rock[0]) - 64, int(rock[1]) - 48);
    for (int i=0; i<n; i++){
        string move; cin >> move;
        moveUnit(move, k_pos, r_pos);
    }
    cout << char(k_pos.first+64) << k_pos.second << endl;
    cout << char(r_pos.first+64) << r_pos.second << endl;
}
int main(){
    fastio;
    INPUT();
    return 0;
}