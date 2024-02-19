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

deque<char>* dq;
vector<pair<int,int> > v;
int k;
void turnGear(int g, int dir){
    // 1 : clockwise, -1 : anti-clockwise
    if (dir == 1){
        dq[g].push_front(dq[g].back());
        dq[g].pop_back();
    }
    else if (dir == -1){
        dq[g].push_back(dq[g].front());
        dq[g].pop_front();
    }
}
void freeDQ(){
    delete[] dq;
}
void printDQ(int g){
    for (int i=0; i<dq[g].size(); i++){
        cout << dq[g][i] << " ";
    }
    cout << endl;
}
void dirTurn(int node, int dir, int rdir){
    if (dir == 1 && node == 3) return;
    if (dir == 2 && node == 0) return;

    // 1 : right
    if (dir == 1){
        if (dq[node][2] != dq[node + 1][6]){
            dirTurn(node + 1, dir, rdir * - 1);
            turnGear(node + 1, rdir * -1);
        }
    }
    // 2 : left
    else if (dir == 2){
        if (dq[node][6] != dq[node - 1][2]){
            dirTurn(node - 1, dir, rdir * -1);
            turnGear(node - 1, rdir * -1);
        }
    }
}
void SOLUTION(){
    for (int i=0; i<v.size(); i++){
        int node = v[i].first, dir = v[i].second;
        dirTurn(node, 1, dir);
        dirTurn(node, 2, dir);
        turnGear(node, dir);
        // for (int j=0; j<4; j++){
        //     printDQ(j);
        // }
        // cout << endl;
    }
    int ans = 0;
    for (int i=0; i<4; i++){
        if (dq[i][0] == '1'){
            ans += (1 << i);
        }
    }
    cout << ans << endl;
}
void INPUT(){
    dq = new deque<char>[4];
    for (int i=0; i<4; i++){
        string line; cin >> line;
        for (int j=0; j<line.size(); j++){
            dq[i].push_back(line[j]);
        }
    }
    cin >> k;
    for (int i=0; i<k; i++){
        int gear, dir; cin >> gear >> dir;
        v.push_back(make_pair(gear - 1, dir));
    }

    SOLUTION();
    freeDQ();
}


int main(){
    fastio;
    INPUT();
    return 0;
}