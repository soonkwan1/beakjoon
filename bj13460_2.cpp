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

int n, m;
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

char** getTable(){
    char** t = new char*[n];
    for (int i=0; i<n; i++){
        t[i] = new char[m];
        string line; cin >> line;
        for (int j=0; j<m; j++){
            t[i][j] = line[j];
        }
    }
    return t;
}
void freeTable(char** t){
    for (int i=0; i<n; i++) delete[] t[i];
    delete[] t;
}
void printTable(char** t){
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cout << t[i][j] << " ";
        }
        cout << endl;
    }
}
pair<int,int> getPos(char** t, char c){
    int x, y;
    int flag = 0;
    x = -1, y = -1;
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            if (t[i][j] == c) {
                x = i, y = j, flag = 1;
                break;
            }
        }
        if (flag) break;
    }
    return make_pair(x, y);
}
void blueMove(char** t, int dir, int nx, int ny){
    t[nx][ny] = '.';
    while (true){
        if (t[nx+dx[dir]][ny+dy[dir]] == '#' || t[nx+dx[dir]][ny+dy[dir]] == 'R'){
            break;
        }
        else if (t[nx+dx[dir]][ny+dy[dir]] == 'O'){
            return;
        }
        nx += dx[dir], ny += dy[dir];
    }
    t[nx][ny] = 'B';
}
void redMove(char** t, int dir, int nx, int ny){
    t[nx][ny] = '.';
    while (true){
        if (t[nx+dx[dir]][ny+dy[dir]] == '#' || t[nx+dx[dir]][ny+dy[dir]] == 'B'){
            break;
        }
        else if (t[nx+dx[dir]][ny+dy[dir]] == 'O'){
            return;
        }
        nx += dx[dir], ny += dy[dir];
    }
    t[nx][ny] = 'R';
}
void ballMove(char** t, int i){
    pair<int,int> red_pos = getPos(t, 'R');
    pair<int,int> blue_pos = getPos(t, 'B');

    if (red_pos.second == blue_pos.second && red_pos.first > blue_pos.first && i == 0){
        blueMove(t, i, blue_pos.first, blue_pos.second);
        redMove(t, i, red_pos.first, red_pos.second);
    }
    else if (red_pos.second < blue_pos.second && red_pos.first == blue_pos.first && i == 1){
        blueMove(t, i, blue_pos.first, blue_pos.second);
        redMove(t, i, red_pos.first, red_pos.second);
    }
    else if (red_pos.second == blue_pos.second && red_pos.first < blue_pos.first && i == 2){
        blueMove(t, i, blue_pos.first, blue_pos.second);
        redMove(t, i, red_pos.first, red_pos.second);
    }
    else if (red_pos.second > blue_pos.second && red_pos.first == blue_pos.first && i == 3){
        blueMove(t, i, blue_pos.first, blue_pos.second);
        redMove(t, i, red_pos.first, red_pos.second);
    }
    else {
        redMove(t, i, red_pos.first, red_pos.second);
        blueMove(t, i, blue_pos.first, blue_pos.second);
    }
}
char** deepTable(char** table){
    char** t = new char*[n];
    for (int i=0; i<n; i++){
        t[i] = new char[m];
        for (int j=0; j<m; j++){
            t[i][j] = table[i][j];
        }
    }
    return t;
}
int bfs(char** table, bool** visited){
    deque<pair<pair<int,int>, int> > dq;
    deque<char**> t_dq;

    pair<int,int> f_pos = getPos(table, 'R');
    pair<int,int> goal = getPos(table, 'O');
    visited[f_pos.first][f_pos.second] = 1;
    dq.push_back(make_pair(make_pair(f_pos.first, f_pos.second), 0));

    char** t_first = deepTable(table);
    t_dq.push_back(t_first);

    int ans = -1;
    while(!dq.empty()){
        int ix = dq.front().first.first;
        int iy = dq.front().first.second;
        int c = dq.front().second;
        char** itable = t_dq.front();

        dq.pop_front();
        t_dq.pop_front();

        if (ix == goal.first && iy == goal.second){
            ans = c;
            break;
        }

        for (int i=0; i<4; i++){
            char** n_table = deepTable(itable);
            ballMove(n_table, i);
            
            pair<int,int> red_pos = getPos(n_table, 'R');
            pair<int,int> blue_pos = getPos(n_table, 'B');
            int rx = red_pos.first, ry = red_pos.second;
            int bx = blue_pos.first, by = blue_pos.second;

            if (bx == -1 && by == -1) {
                freeTable(n_table);
                continue;
            }
            if (rx == -1 && ry == -1){
                dq.push_back(make_pair(make_pair(goal.first, goal.second), c+1));
                t_dq.push_back(n_table);
                continue;
            }
            if (visited[rx][ry]) continue;

            // printTable(n_table);
            visited[rx][ry] = 1;
            dq.push_back(make_pair(make_pair(rx, ry), c+1));
            t_dq.push_back(n_table);
        }
        freeTable(itable);
    }

    for (int i=0; i<t_dq.size(); i++){
        freeTable(t_dq[i]);
    }

    return ans;
}
bool** getVisit(){
    bool** tmp = new bool*[n];
    for (int i=0; i<n; i++){
        tmp[i] = new bool[m];
        fill_n(tmp[i], m, false);
    }
    return tmp;
}
void freeVisit(bool** t){
    for (int i=0; i<n; i++) delete[] t[i];
    delete[] t;
}
void INPUT(){
    cin >> n >> m;
    char** table = getTable();
    bool** visited = getVisit();
    
    int ans = bfs(table, visited);
    cout << ans << endl;
    
    freeTable(table);
    freeVisit(visited);
}

int main(){
    fastio;
    INPUT();
    return 0;
}

/*

5 5
#####
#..R#
#.###
#.OB#
#####

3 10
##########
#.O....RB#
##########

*/