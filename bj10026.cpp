#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
#include <queue>
using namespace std;

void INIT(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}
pair<char**, char**> intAlloc(int n){
    char** rgb = new char*[n];
    char** rb = new char*[n];
    string line;
    for (int i=0; i<n; i++){
        rgb[i] = new char[n];
        rb[i] = new char[n];
        cin  >> line;
        for (int j=0; j<line.size(); j++){
            rgb[i][j] = line[j];
            if (line[j] == 'G') {
                rb[i][j] = 'R';
            }
            else{
                rb[i][j] = line[j];
            }
        }
    }

    return make_pair(rgb, rb);    
}
void freeMemory(char** t, int n) {
    for (int i=0; i<n; i++){
        delete[] t[i];
    }
    delete[] t;
}
void printTable(char** t, int n)    {
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cout << t[i][j] << " ";
        }
        cout << "\n";
    }
}
void bfs(char** t, char color, int x, int y, int n){
    deque<pair<int, int> > pos;
    pos.push_back(make_pair(x, y));
    t[x][y] = 'N';

    int dx[4] = {0, 0, -1, 1};
    int dy[4] = {-1, 1, 0, 0};

    while (!pos.empty()){
        int ix = pos.front().first;
        int iy = pos.front().second;
        pos.pop_front();

        for (int i=0; i<4; i++){
            int nx = ix + dx[i];
            int ny = iy + dy[i];

            if (nx >= 0 && nx < n && ny >= 0 && ny < n){
                if (t[nx][ny] == color){
                    pos.push_back(make_pair(nx, ny));
                    t[nx][ny] = 'N';
                }
            }
        }
    }
}
void INPUT(){
    int n; cin >> n;
    pair<char**, char**> tmp = intAlloc(n);
    
    int rgb_cnt = 0;
    int rb_cnt = 0;
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            if (tmp.first[i][j] == 'R'){
                bfs(tmp.first, 'R', i, j, n);
                rgb_cnt++;
            }
            else if (tmp.first[i][j] == 'B'){
                bfs(tmp.first, 'B', i, j, n);
                rgb_cnt++;
            }
            else if (tmp.first[i][j] == 'G'){
                bfs(tmp.first, 'G', i, j, n);
                rgb_cnt++;
            }

            if (tmp.second[i][j] == 'R'){
                bfs(tmp.second, 'R', i, j, n);  
                rb_cnt++;
            }
            else if (tmp.second[i][j] == 'B'){
                bfs(tmp.second, 'B', i, j, n);
                rb_cnt++;
            }
        }
    }

    cout << rgb_cnt << " " << rb_cnt << "\n";
    freeMemory(tmp.first, n);
    freeMemory(tmp.second, n);
}

int main(){
    INIT();
    INPUT();
    return 0;
}

/*
5
RRRBB
GGBBB
BBBRR
BBRRR
RRRRR
*/